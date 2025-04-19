#include <string>
std::string font_frag = R"~(
// 2D Font Fragment Shader
#version 460 core
in vec2 vertex_uv;

out vec4 FragColor;

uniform sampler2D glyph_texture;
uniform vec3 text_color;

void main()
{
    float glyph_shape = texture(glyph_texture, vertex_uv).r;
    if(glyph_shape < 0.5)
        discard;
    FragColor = vec4(text_color, 1.0f);
}
)~";
std::string font_vert = R"~(
// 2D Font Vertex Shader
#version 460 core
layout (location = 0) in vec2 _vertex_position;
layout (location = 1) in vec2 _vertex_uv;

out vec2 vertex_uv;

uniform mat4 ortho_matrix;

void main()
{
    gl_Position = ortho_matrix * vec4(_vertex_position, 0.0f, 1.0f);
    vertex_uv = _vertex_uv;
}
)~";
