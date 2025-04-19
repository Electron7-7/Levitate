#ifndef LEVITATE_RENDERING
#define LEVITATE_RENDERING
#include <glm/fwd.hpp>
#include <string>
#include <array>

#define VAOS_AMOUNT 1
//-------------------
#define VAO_TEXT    0

#define VBOS_AMOUNT 2
//-------------------
#define VBO_GLYPH   0
#define VBO_CURSOR  1


struct GLShader
{
public:
    unsigned int id = 0;

    GLShader() = default;
    GLShader(std::string, std::string);

    template<typename T> void setUniform(const std::string&, T) const;

private:
    void GLShaderErrorHandler(const unsigned int, const bool = false);
};

namespace Levitate
{
    namespace Render
    {
        extern std::array<unsigned int, VAOS_AMOUNT> VAOs;
        extern std::array<unsigned int, VBOS_AMOUNT> VBOs;
        extern glm::vec2 main_window_size;

        void InitializeRenderingAPI();
    }
}
#endif