#ifndef LEVITATE_EMBEDDED_SHADERS
#define LEVITATE_EMBEDDED_SHADERS
#include <embedded_resource.hpp>
constexpr EmbeddedResource font_shader_frag("font_shader_frag", 0, R"~(// 2D Font Fragment Shader
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
)~");
constexpr EmbeddedResource font_shader_vert("font_shader_vert", 0, R"~(// 2D Font Vertex Shader
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
)~");
#endif