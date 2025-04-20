#ifndef LEVITATE_EDITOR_LANDSCAPE
#define LEVITATE_EDITOR_LANDSCAPE
#include "l_rendering.hpp"
#include <glm/glm.hpp>
#include <bitset>

namespace Levitate
{
    namespace E_Scape // Editor-landScape
    {
        constexpr std::bitset<8> NONE      = 0 << 0;
        constexpr std::bitset<8> FOCUSED   = 1 << 0;
        constexpr std::bitset<8> UNFOCUSED = 1 << 1;
        constexpr std::bitset<8> TEXTMODE  = 1 << 2;

        extern std::string global_buffer;
        extern unsigned int cursor_position;
        extern TextRenderCmd main_text_render_command;

        void moveCursorHorizontally(const int by_this_much);
        void InsertCharacter(const unsigned int codepoint);
        void InsertNewLine();
        void DeleteCharacter();
        const std::string getGlobalBuffer();
        void updateAndBufferTextRenderCmd();
    }
}
#endif