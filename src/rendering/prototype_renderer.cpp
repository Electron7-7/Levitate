#include "prototype_renderer.hpp"
#include "glad/glad.h"
#include "common/labels.hpp"
#include "editor/lines.hpp"
#include "editor/input.hpp"

#include <glm/ext/matrix_clip_space.hpp>
#include <ft2build.h>
#include FT_FREETYPE_H

GLShader* temp_shader_pointer;

unsigned int TEMPORARY_VAO;

FT_Library freetype;
FT_Library* global_freetype = &freetype;

void GlyphLoop(unsigned long character, FT_Face new_face, const char* font_name)
{
    if(FT_Load_Char(new_face, character, FT_LOAD_RENDER))
    {
        printf("%s FreeType failed to load glyph (character: %c) (font: %s)%s\n", ERROR, static_cast<char>(character), font_name, COLOR_RESET);
        return;
    }

    FT_GlyphSlot glyph_slot = new_face->glyph;
    FT_Render_Glyph(glyph_slot, FT_RENDER_MODE_SDF);

    unsigned int texture_id;
    glGenTextures(1, &texture_id);
    glBindTexture(GL_TEXTURE_2D, texture_id);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RED, glyph_slot->bitmap.width, glyph_slot->bitmap.rows, 0, GL_RED, GL_UNSIGNED_BYTE, glyph_slot->bitmap.buffer);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    font_map.at(font_name).character_set[static_cast<char>(character)] = Character(texture_id, glyph_slot->bitmap.width, glyph_slot->bitmap.rows, glyph_slot->bitmap_left, glyph_slot->bitmap_top, static_cast<int>(glyph_slot->advance.x));
}

void QuickShittySetupFont(const char* font_name, unsigned char font_data[], unsigned int font_length)
{
    FT_Face new_face;

    if(FT_New_Memory_Face(freetype, font_data, font_length, 0, &new_face))
        return;

    FT_Set_Pixel_Sizes(new_face, 0, 48);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

    font_map[font_name] = Font(font_name);

    for(unsigned char character = 0 ; character < 128 ; character++)
        GlyphLoop(character, new_face, font_name);

    if(FT_Select_Charmap(new_face, ft_encoding_unicode))
        printf("%s Unicode error!%s\n", ERROR, COLOR_RESET);
    // This is "▉" as pure character codes. It doesn't show up correctly, because it's erroneously parsed as 3 chars.
    // Need a fix for this.
    GlyphLoop('\xe2', new_face, font_name);
    GlyphLoop('\x96', new_face, font_name);
    GlyphLoop('\x89', new_face, font_name);

    FT_Done_Face(new_face);

    glBindVertexArray(TEMPORARY_VAO);
    glGenBuffers(1, &font_map.at(font_name).VBO);
    glBindBuffer(GL_ARRAY_BUFFER, font_map.at(font_name).VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 6 * 4, nullptr, GL_DYNAMIC_DRAW);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), (void*)(0));
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), (void*)(2 * sizeof(float)));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
}

void RenderCharacter(float& position_x, float position_y, const int scale, const Font& font, const Character& character)
{
    float x_position = position_x + character.bearing_x * scale;
    float y_position = position_y - (character.size_y - character.bearing_y) * scale;
    float width = character.size_x * scale;
    float height = character.size_y * scale;
    float vertices[24] =
    {
        x_position        , y_position + height, 0.0f, 0.0f,
        x_position        , y_position         , 0.0f, 1.0f,
        x_position + width, y_position         , 1.0f, 1.0f,
        x_position        , y_position + height, 0.0f, 0.0f,
        x_position + width, y_position         , 1.0f, 1.0f,
        x_position + width, y_position + height, 1.0f, 0.0f,
    };

    glBindVertexArray(TEMPORARY_VAO);
    glBindTextureUnit(0, character.texture_id);
    glBindBuffer(GL_ARRAY_BUFFER, font.VBO);
    glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(vertices), &vertices);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), (void*)(0));
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), (void*)(2 * sizeof(float)));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glUseProgram(temp_shader_pointer->GetID());
    glDrawArrays(GL_TRIANGLES, 0, 6);
}

void try_DrawCursor(float position_x, float position_y, const int scale, Font& font)
{
    Character& cursor = font.character_set.at('|');
    float cursor_position_x = position_x - ((cursor.size_x * scale) / 2.0f) - cursor.bearing_x;
    RenderCharacter(cursor_position_x, position_y, scale, font, cursor);
}

void QuickShittyPrintToScreen(float position_x, float position_y, const int scale, glm::vec3 color, const char* font_name)
{
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDisable(GL_CULL_FACE);
    temp_shader_pointer->setUniform("ortho_matrix", glm::ortho(0.0f, 800.0f, 0.0f, 600.0f));
    temp_shader_pointer->setUniform("text_color", color);
    Font &font = font_map.at(font_name);
    float init_position_x = position_x;
    // std::string global_buffer = GetCurrentLine().insert(GetCaretColumn(), "▉");
    std::string global_buffer = GetAllLines();
    unsigned int row_number = 0;
    unsigned int column_number = 0;
    for(std::string::const_iterator character_iterator = global_buffer.begin() ; character_iterator != global_buffer.end() ; character_iterator++)
    {
        if(*character_iterator == '\n')
        {
            if(row_number == GetCaretLine() && column_number == GetCaretColumn())
                try_DrawCursor(position_x, position_y, scale, font);
        #ifdef DEBUGGING
            Character& new_line = font.character_set.at('$');
            RenderCharacter(position_x, position_y, scale, font, new_line);
        #endif
            ++row_number;
            column_number = 0;
            position_x = init_position_x;
            position_y -= font.character_set.at('0').size_y * scale;
            continue;
        }

        Character& character = font.character_set.at(*character_iterator);
        RenderCharacter(position_x, position_y, scale, font, character);

        if(row_number == GetCaretLine() && column_number == GetCaretColumn())
            try_DrawCursor(position_x, position_y, scale, font);

        // Advance cursors for next glyph
        position_x += (character.advance >> 6) * scale; // bitshift by 6 to get value in pixels (2^6 = 64)

        ++column_number;
    }
    glDisable(GL_BLEND);
}
