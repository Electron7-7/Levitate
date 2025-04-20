#ifndef LEVITATE_RENDERING
#define LEVITATE_RENDERING
#include "freetype/freetype.h"
#include "fonts.hpp"
#include "l_math.hpp"
#include <glm/fwd.hpp>
#include <string>

namespace Levitate
{
    struct GLShader
    {
    public:
        unsigned int id = 0;

        GLShader();
        GLShader(std::string, std::string);

        template<typename T> void setUniform(const std::string&, T) const;

    private:
        const bool errorHandler(const unsigned int, const bool = false);
        void compileShader(const char*, const char*);
    };

    struct TextRenderCmd
    {
        std::string text = "";
        std::string font_name = "";
        float position_x = 0.0f;
        float position_y = 0.0f;
        float scale = 1.0f;
        Levitate::Math::vec3 color = Levitate::Math::vec3(1.0f);

        TextRenderCmd();
        TextRenderCmd(const std::string, const std::string_view = Verdana_ttf.id, const float = 0.0f, const float = 0.0f, const float = 1.0f, const Levitate::Math::vec3 = Levitate::Math::vec3(1.0f));

        const bool invalid() const;
    };

    namespace Renderer
    {
        //--------------------------------------------
        inline constexpr unsigned int VAOS_AMOUNT = 1;
        inline constexpr unsigned int VAO_TEXT    = 0;
        //--------------------------------------------
        inline constexpr unsigned int VBOS_AMOUNT = 2;
        inline constexpr unsigned int VBO_GLYPH   = 0;
        inline constexpr unsigned int VBO_CURSOR  = 1;
        //--------------------------------------------

        extern std::array<unsigned int, VAOS_AMOUNT> VAOs;
        extern std::array<unsigned int, VBOS_AMOUNT> VBOs;
        extern std::vector<Levitate::TextRenderCmd> text_render_commands;
        extern glm::mat4 orthographic_matrix;
        extern glm::vec2 main_window_size; // Todo: consider making this not a global variable

        void InitializeRenderingAPI();
        void GenerateTexture(const FT_GlyphSlot, unsigned int&);
        const unsigned int GenerateTexture(const FT_GlyphSlot);

        void BufferRenderCommand(Levitate::TextRenderCmd);
        void DrawText(const GLShader&);
    }
}
#endif