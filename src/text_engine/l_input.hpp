#ifndef LEVITATE_INPUT
#define LEVITATE_INPUT
#include <string>
#include <map>
#include <glm/glm.hpp>

// Character struct from GraphX (https://github.com/Electron7-7/graphx)
struct Character
{
    unsigned int texture_id;
    int size_x;
    int size_y;
    int bearing_x; // Offset from baseline to left of glyph
    int bearing_y; // Offset from baseline to top of glyph
    int advance;   // Offset to advance to next glyph

    Character() = default;
    Character(unsigned int init_texture_id, int init_size_x, int init_size_y, int init_bearing_x, int init_bearing_y, int init_advance);
    Character(unsigned int init_texture_id, glm::vec2 init_size, glm::vec2 init_bearing, int init_advance);
};

// Font struct from GraphX (https://github.com/Electron7-7/graphx)
struct Font
{
    std::string font_name;
    std::map<char, Character> character_set;
    unsigned int texture_array_id;
    unsigned int VBO;

    Font() = default;
    Font(std::string init_font_name);
};

void InsertCharacter(const unsigned int);
void InsertNewLine();
void moveCursorHorizontally(const int);
void DeleteCharacter();
const std::string getGlobalBuffer();

extern std::map<std::string, Font> font_map;
#endif