#ifndef LEVITATE_EDITOR_LANDSCAPE
#define LEVITATE_EDITOR_LANDSCAPE
#include "l_rendering.hpp"
#include <bitset>
#include <glm/glm.hpp>

namespace Levitate
{
    namespace E_Scape // Editor-landScape
    {
        constexpr std::bitset<8> NONE      = 0 << 0;
        constexpr std::bitset<8> FOCUSED   = 1 << 0;
        constexpr std::bitset<8> UNFOCUSED = 1 << 1;
        constexpr std::bitset<8> TEXTMODE  = 1 << 2;
    }
}

void QuickShittyPrintToScreen(float = 0.0f, float = 0.0f, const int = 1, glm::vec3 = glm::vec3(1.0f));
void QuickShittySetupFreetype();

extern GLShader *temp_shader_pointer;
extern unsigned int TEMPORARY_VAO;
#endif