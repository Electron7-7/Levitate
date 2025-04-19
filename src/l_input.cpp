#include "l_input.hpp"
#include "l_rendering.hpp"
#include "sanity.hpp"
#include <fonts.hpp>
#include <glad/glad.h>
#include <iostream>
#include <ft2build.h>
#include FT_FREETYPE_H

std::set<Font> all_fonts;

//----------
// Character
//----------
Character::Character(unsigned int init_texture_id, int init_size_x, int init_size_y, int init_bearing_x, int init_bearing_y, int init_advance)
{
    texture_id = init_texture_id;
    size_x = init_size_x;
    size_y = init_size_y;
    bearing_x = init_bearing_x;
    bearing_y = init_bearing_y;
    advance = init_advance;
}

Character::Character(unsigned int init_texture_id, glm::vec2 init_size, glm::vec2 init_bearing, int init_advance)
: Character(init_texture_id, init_size.x, init_size.y, init_bearing.x, init_bearing.y, init_advance)
{}

const bool Character::operator==(const Character& compare_against) const { return  (character == compare_against.character); }
const bool Character::operator!=(const Character& compare_against) const { return !(*this == compare_against);               }


//-----
// Font
//-----
Font::Font(unsigned char font_file, unsigned int font_file_size, std::string init_font_name)
: font_name(init_font_name)
{
    FT_Library freetype;

    if(FT_Init_FreeType(&freetype))
    {
        PRINTERR("FreeType library failed to initialize!")
        return;
    }

    FT_Face new_face;

    if(FT_New_Memory_Face(freetype, Verdana_ttf, Verdana_ttf_len, 0, &new_face))
    {
        PRINTERR("FreeType font face failed to load from memory! (name: " << init_font_name << ")")
        return;
    }

    FT_Set_Pixel_Sizes(new_face, 0, 48);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

    for(unsigned char character = 0 ; character < 128 ; character++)
    {
        FT_GlyphSlot glyph_slot = new_face->glyph;
        if(FT_Render_Glyph(glyph_slot, FT_RENDER_MODE_SDF))
        {
            PRINTERR("FreeType failed to load glyph (character: " << character << ")")
            continue;
        }

        unsigned int texture_id;
        glGenTextures(1, &texture_id);
        glBindTexture(GL_TEXTURE_2D, texture_id);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RED, glyph_slot->bitmap.width, glyph_slot->bitmap.rows, 0, GL_RED, GL_UNSIGNED_BYTE, glyph_slot->bitmap.buffer);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

        character_set.insert(Character(texture_id, glyph_slot->bitmap.width, glyph_slot->bitmap.rows, glyph_slot->bitmap_left, glyph_slot->bitmap_top, static_cast<int>(glyph_slot->advance.x)));
    }

    FT_Done_Face(new_face);
    FT_Done_FreeType(freetype);

    glBindVertexArray(Levitate::Render::VAOs[VAO_TEXT]);
    glBindBuffer(GL_ARRAY_BUFFER, Levitate::Render::VBOs[VBO_GLYPH]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 24, nullptr, GL_DYNAMIC_DRAW);
}

const bool Font::operator==(const std::string& compare_against) const { return  (!font_name.compare(compare_against)); }
const bool Font::operator!=(const std::string& compare_against) const { return !(*this == compare_against);            }

const bool Font::operator==(const Font& compare_against) const { return  (!font_name.compare(compare_against.font_name)); }
const bool Font::operator!=(const Font& compare_against) const { return !(*this == compare_against);                      }

constexpr Font::operator std::string() const { return font_name; }