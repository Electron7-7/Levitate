#ifndef LEVITATE_INPUT
#define LEVITATE_INPUT
#include <map>
#include <string>
#include <fonts.hpp>
#include <glm/glm.hpp>

namespace Levitate
{
    // Character struct from GraphX (https://github.com/Electron7-7/graphx)
    struct Character
    {
        char character;
        unsigned int texture_id;
        int size_x;
        int size_y;
        int bearing_x; // Offset from baseline to left of glyph
        int bearing_y; // Offset from baseline to top of glyph
        int advance;   // Offset to advance to next glyph

        Character() = default;
        Character(unsigned int init_texture_id, int init_size_x, int init_size_y, int init_bearing_x, int init_bearing_y, int init_advance);
        Character(unsigned int init_texture_id, glm::vec2 init_size, glm::vec2 init_bearing, int init_advance);

        const bool operator==(const Character&) const;
        const bool operator!=(const Character&) const;
    };

    // Font struct from GraphX (https://github.com/Electron7-7/graphx)
    struct Font
    {
        // std::string font_name = "";
        int font_id = -1;
        std::map<char, Character> character_set = {};

        Font() = default;
        Font(const int);
        Font(unsigned char, unsigned int, int);

        const bool operator==(const Font&) const;
        const bool operator!=(const Font&) const;
        const bool operator==(const int&) const;
        const bool operator!=(const int&) const;

    };

    namespace Text
    {
        inline constexpr const EmbeddedResource& DEFAULT_FONT = Verdana_ttf;

        extern std::map<int, Levitate::Font> all_fonts;
    }
}
#endif