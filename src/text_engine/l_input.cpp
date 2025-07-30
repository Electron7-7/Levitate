#include "l_input.hpp"
#include <iostream>

std::map<std::string, Font> font_map;

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

//-----
// Font
//-----
Font::Font(std::string init_font_name)
: font_name(init_font_name)
{}


std::string global_buffer = ""; // proof of concept only; delete this shit later
unsigned long cursor_pos = 0;

void BareBonesTyping(const unsigned int codepoint)
{
    char new_character = static_cast<char>(codepoint);
    std::string new_buffer = global_buffer + new_character;
    if(!new_buffer.compare(global_buffer))
        return;

    global_buffer = new_buffer;
    std::cout << new_character << std::flush;
}

void moveCursorHorizontally(const int by_this_much)
{
    if((by_this_much < 0 && cursor_pos == 0) || (cursor_pos + by_this_much) > global_buffer.size())
        return;
    cursor_pos += by_this_much;
}

void InsertCharacter(const unsigned int codepoint)
{
    global_buffer.insert(cursor_pos, 1, static_cast<char>(codepoint));
    cursor_pos += 1;
}

void InsertNewLine()
{
    global_buffer.insert(cursor_pos, 1, '\n');
    cursor_pos += 1;
}

void DeleteCharacter()
{
    if(cursor_pos == 0)
        return;
    cursor_pos -= 1;
    global_buffer.erase(cursor_pos, 1);
}

const std::string getGlobalBuffer()
{
    std::string new_global_buffer = global_buffer;
    return new_global_buffer.insert(cursor_pos, 1, '|');
}