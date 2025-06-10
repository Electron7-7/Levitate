#include "l_input.hpp"
#include "l_rendering.hpp"
#include "sanity.hpp"
#include <fonts.hpp>
#include <ft2build.h>
#include FT_FREETYPE_H

std::map<int, Levitate::Font> Levitate::Text::all_fonts;

//----------
// Character
//----------
Levitate::Character::Character(unsigned int init_texture_id, int init_size_x, int init_size_y, int init_bearing_x, int init_bearing_y, int init_advance)
{
    texture_id = init_texture_id;
    size_x = init_size_x;
    size_y = init_size_y;
    bearing_x = init_bearing_x;
    bearing_y = init_bearing_y;
    advance = init_advance;
}

Levitate::Character::Character(unsigned int init_texture_id, glm::vec2 init_size, glm::vec2 init_bearing, int init_advance)
: Character(init_texture_id, init_size.x, init_size.y, init_bearing.x, init_bearing.y, init_advance)
{}

const bool Levitate::Character::operator==(const Levitate::Character& compare_against) const { return  (character == compare_against.character); }
const bool Levitate::Character::operator!=(const Levitate::Character& compare_against) const { return !(*this == compare_against);               }


//-----
// Font
//-----
Levitate::Font::Font(int init_font_id)
: font_id(init_font_id)
{}

Levitate::Font::Font(unsigned char font_file, unsigned int font_file_size, int init_font_id)
: font_id(init_font_id)
{
    if(Levitate::Text::all_fonts.contains(font_id))
    {
        *this = Levitate::Text::all_fonts.at(font_id);
        return;
    }

    FT_Library freetype;

    if(FT_Init_FreeType(&freetype))
    {
        PRINTERR("FreeType library failed to initialize!")
        return;
    }

    FT_Face new_face;

    if(FT_New_Memory_Face(freetype, Verdana_ttf.Data(), Verdana_ttf.DataLength(), 0, &new_face))
    {
        PRINTERR("FreeType font face failed to load from memory! Font ID: " << std::to_string(font_id))
        return;
    }

    FT_Set_Pixel_Sizes(new_face, 0, 48);

    for(unsigned char character = 0 ; character < 128 ; character++)
    {
        FT_GlyphSlot glyph_slot = new_face->glyph;
        if(FT_Render_Glyph(glyph_slot, FT_RENDER_MODE_SDF))
        {
            PRINTERR("FreeType failed to load glyph (character: " << character << ")")
            continue;
        }

        character_set[character] = Character(Levitate::Renderer::GenerateTexture(glyph_slot), glyph_slot->bitmap.width, glyph_slot->bitmap.rows, glyph_slot->bitmap_left, glyph_slot->bitmap_top, static_cast<int>(glyph_slot->advance.x));
    }

    FT_Done_Face(new_face);
    FT_Done_FreeType(freetype);

    Levitate::Text::all_fonts[font_id] = *this;
}

const bool Levitate::Font::operator==(const int& compare_against) const { return font_id == compare_against;  }
const bool Levitate::Font::operator!=(const int& compare_against) const { return !(*this == compare_against); }
const bool Levitate::Font::operator==(const Levitate::Font& compare_against) const { return font_id == compare_against.font_id; }
const bool Levitate::Font::operator!=(const Levitate::Font& compare_against) const { return !(*this == compare_against);        }