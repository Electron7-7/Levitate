#include "e_scape.hpp"
#include "l_input.hpp"
#include "sanity.hpp"
#include <fonts.hpp>
#include <glad/glad.h>
#include <glm/ext/matrix_clip_space.hpp>
#include <ft2build.h>
#include FT_FREETYPE_H

std::string Levitate::E_Scape::global_buffer = "";
unsigned int Levitate::E_Scape::cursor_position = 0;

void BareBonesTyping(const unsigned int codepoint)
{
    char new_character = static_cast<char>(codepoint);
    std::string new_buffer = Levitate::E_Scape::global_buffer + new_character;
    if(!new_buffer.compare(Levitate::E_Scape::global_buffer))
        return;

    Levitate::E_Scape::global_buffer = new_buffer;
    std::cout << new_character << std::flush;
}

void moveCursorHorizontally(const int by_this_much)
{
    if((by_this_much < 0 && Levitate::E_Scape::cursor_position == 0) || (Levitate::E_Scape::cursor_position + by_this_much) > Levitate::E_Scape::global_buffer.size())
        return;
    Levitate::E_Scape::cursor_position += by_this_much;
}

void InsertCharacter(const unsigned int codepoint)
{
    Levitate::E_Scape::global_buffer.insert(Levitate::E_Scape::cursor_position, 1, static_cast<char>(codepoint));
    Levitate::E_Scape::cursor_position += 1;
}

void InsertNewLine()
{
    Levitate::E_Scape::global_buffer.insert(Levitate::E_Scape::cursor_position, 1, '\n');
    Levitate::E_Scape::cursor_position += 1;
}

void DeleteCharacter()
{
    if(Levitate::E_Scape::cursor_position == 0)
        return;
    Levitate::E_Scape::cursor_position -= 1;
    Levitate::E_Scape::global_buffer.erase(Levitate::E_Scape::cursor_position, 1);
}

const std::string getGlobalBuffer()
{
    std::string new_global_buffer = Levitate::E_Scape::global_buffer;
    return new_global_buffer.insert(Levitate::E_Scape::cursor_position, 1, '|');
}

void QuickShittyPrintToScreen(float position_x, float position_y, const int scale, glm::vec3 color)
{
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDisable(GL_CULL_FACE);
    temp_shader_pointer->setUniform("ortho_matrix", glm::ortho(0.0f, main_window_size.x, 0.0f, main_window_size.y));
    temp_shader_pointer->setUniform("text_color", color);
    std::string fuck("Verdana");
    auto &font = all_fonts.find(fuck);
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