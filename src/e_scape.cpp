#include "e_scape.hpp"
#include "l_input.hpp"
#include "sanity.hpp"
#include <fonts.hpp>
#include <glad/glad.h>
#include <glm/ext/matrix_clip_space.hpp>
#include <ft2build.h>
#include FT_FREETYPE_H

GLShader *temp_shader_pointer;

unsigned int TEMPORARY_VAO;

FT_Library freetype;

void QuickShittySetupFreetype()
{
    if(FT_Init_FreeType(&freetype))
        PRINTERR("FreeType library failed to initialize!")

    FT_Face new_face;

    if(FT_New_Memory_Face(freetype, Verdana_ttf, Verdana_ttf_len, 0, &new_face))
        return;

    FT_Set_Pixel_Sizes(new_face, 0, 48);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

    font_map["Verdana"] = Font("Verdana");

    for(unsigned char character = 0 ; character < 128 ; character++)
    {
        if(FT_Load_Char(new_face, character, FT_LOAD_RENDER))
        {
            PRINTERR("FreeType failed to load glyph (character: " << character << ")")
            continue;
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

        font_map.at("Verdana").character_set[character] = Character(texture_id, glyph_slot->bitmap.width, glyph_slot->bitmap.rows, glyph_slot->bitmap_left, glyph_slot->bitmap_top, static_cast<int>(glyph_slot->advance.x));
    }

    FT_Done_Face(new_face);

    glBindVertexArray(TEMPORARY_VAO);
    glGenBuffers(1, &font_map.at("Verdana").VBO);
    glBindBuffer(GL_ARRAY_BUFFER, font_map.at("Verdana").VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 6 * 4, nullptr, GL_DYNAMIC_DRAW);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), (void*)(0));
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), (void*)(2 * sizeof(float)));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
}

void QuickShittyPrintToScreen(float position_x, float position_y, const int scale, glm::vec3 color)
{
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDisable(GL_CULL_FACE);
    temp_shader_pointer->setUniform("ortho_matrix", glm::ortho(0.0f, main_window_size.x, 0.0f, main_window_size.y));
    temp_shader_pointer->setUniform("text_color", color);
    Font &font = font_map.at("Verdana");
    float init_position_x = position_x;
    std::string global_buffer = getGlobalBuffer();
    for(std::string::const_iterator character_iterator = global_buffer.begin() ; character_iterator != global_buffer.end() ; character_iterator++)
    {
        if(*character_iterator == '\n')
        {
            position_x = init_position_x;
            position_y -= font.character_set.at('0').size_y * scale;
            continue;
        }
        Character &character = font.character_set.at(*character_iterator);
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
        glUseProgram(temp_shader_pointer->id);
        glDrawArrays(GL_TRIANGLES, 0, 6);

        // Advance cursors for next glyph
        position_x += (character.advance >> 6) * scale; // bitshift by 6 to get value in pixels (2^6 = 64)
    }
    glDisable(GL_BLEND);
}