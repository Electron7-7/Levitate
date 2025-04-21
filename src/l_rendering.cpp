#include "l_rendering.hpp"
#include "e_scape.hpp"
#include "l_input.hpp"
#include "sanity.hpp"
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <array>

//----------
// Variables
//----------
std::array<unsigned int, Levitate::Renderer::VAOS_AMOUNT> Levitate::Renderer::VAOs;
std::array<unsigned int, Levitate::Renderer::VBOS_AMOUNT> Levitate::Renderer::VBOs;
std::vector<Levitate::TextRenderCmd> Levitate::Renderer::text_render_commands;
glm::mat4 Levitate::Renderer::orthographic_matrix;
glm::vec2 Levitate::Renderer::main_window_size;

//--------
// Classes
//--------
// Levitate::GLShader
//---------
Levitate::GLShader::GLShader(const EmbeddedResource& vertex_shader, const EmbeddedResource& fragment_shader)
{
    std::string vertex_shader_string = vertex_shader.data;
    std::string fragment_shader_string = fragment_shader.data;
    const char* vertex_shader_c_string = vertex_shader_string.c_str();
    const char* fragment_shader_c_string = fragment_shader_string.c_str();

    unsigned int vertex, fragment;
    vertex = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertex, 1, &vertex_shader_c_string, nullptr);
    glCompileShader(vertex);
    errorHandler(vertex);

    fragment = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragment, 1, &fragment_shader_c_string, nullptr);
    glCompileShader(fragment);
    errorHandler(fragment);

    id = glCreateProgram();
    glAttachShader(id, vertex);
    glAttachShader(id, fragment);
    glLinkProgram(id);
    errorHandler(id, true);

    glDeleteShader(vertex);
    glDeleteShader(fragment);
}

const bool Levitate::GLShader::errorHandler(const unsigned int shader_id, const bool is_program)
{
    // TODO: condense this and make it cleaner
    // https://stackoverflow.com/a/63420289
    int v_result = GL_FALSE;
    int info_log_length;
    if(!is_program)
    {
        glGetShaderiv(shader_id, GL_COMPILE_STATUS, &v_result);
        glGetShaderiv(shader_id, GL_INFO_LOG_LENGTH, &info_log_length);
        if(info_log_length > 0)
        {
            std::vector<char> shader_error_message(info_log_length + 1);
            glGetShaderInfoLog(shader_id, info_log_length, nullptr, shader_error_message.data());
            PRINTERR(std::string("GLSL Shader Compilation Error(s):\n") + shader_error_message.data())
            return false;
        }
        return true;
    }

    glGetShaderiv(shader_id, GL_LINK_STATUS, &v_result);
    glGetShaderiv(shader_id, GL_INFO_LOG_LENGTH, &info_log_length);
    if(info_log_length > 0)
    {
        std::vector<char> shader_error_message(info_log_length + 1);
        glGetProgramInfoLog(shader_id, info_log_length, nullptr, shader_error_message.data());
        PRINTERR(std::string("GLSL Shader Linking Error(s):\n") + shader_error_message.data())
        return false;
    }

    return true;
}

template<> void Levitate::GLShader::setUniform<bool>(const std::string &name, bool value) const
{
    glProgramUniform1i(id, glGetUniformLocation(id, name.c_str()), static_cast<int>(value));
}

template<> void Levitate::GLShader::setUniform<int>(const std::string &name, int value) const
{
    glProgramUniform1i(id, glGetUniformLocation(id, name.c_str()), value);
}

template<> void Levitate::GLShader::setUniform<float>(const std::string &name, float value) const
{
    glProgramUniform1f(id, glGetUniformLocation(id, name.c_str()), value);
}

template<> void Levitate::GLShader::setUniform<glm::vec2>(const std::string &name, glm::vec2 value) const
{
    glProgramUniform2fv(id, glGetUniformLocation(id, name.c_str()), 1, glm::value_ptr(value));
}

template<> void Levitate::GLShader::setUniform<glm::vec3>(const std::string &name, glm::vec3 value) const
{
    glProgramUniform3fv(id, glGetUniformLocation(id, name.c_str()), 1, glm::value_ptr(value));
}

template<> void Levitate::GLShader::setUniform<Levitate::Math::vec3>(const std::string &name, Levitate::Math::vec3 value) const
{
    glProgramUniform3fv(id, glGetUniformLocation(id, name.c_str()), 1, glm::value_ptr(glm::vec3(value)));
}

template<> void Levitate::GLShader::setUniform<glm::vec4>(const std::string &name, glm::vec4 value) const
{
    glProgramUniform4fv(id, glGetUniformLocation(id, name.c_str()), 1, glm::value_ptr(value));
}

template<> void Levitate::GLShader::setUniform<glm::mat3>(const std::string &name, glm::mat3 value) const
{
    glProgramUniformMatrix3fv(id, glGetUniformLocation(id, name.c_str()), 1, GL_FALSE, glm::value_ptr(value));
}

template<> void Levitate::GLShader::setUniform<glm::mat4>(const std::string &name, glm::mat4 value) const
{
    glProgramUniformMatrix4fv(id, glGetUniformLocation(id, name.c_str()), 1, GL_FALSE, glm::value_ptr(value));
}

// TextRenderCmd
//--------------
Levitate::TextRenderCmd::TextRenderCmd(const std::string init_text, const std::string_view init_font_name, const float init_position_x, const float init_position_y, const float init_scale, const Levitate::Math::vec3 init_color)
: text(init_text), font_name(init_font_name), position_x(init_position_x), position_y(init_position_y), scale(init_scale), color(init_color)
{}

Levitate::TextRenderCmd::TextRenderCmd()
: Levitate::TextRenderCmd("")
{}

const bool Levitate::TextRenderCmd::invalid() const
{
    return !(Levitate::Text::all_fonts.contains(font_name) /*&& scale >= 0.0f*/); // Todo: check if a negative scale is valid and remove/uncomment the second half of this conditional accordingly
}


//----------
// Functions
//----------
void Levitate::Renderer::InitializeRenderingAPI()
{
    // Initialize VAOs & VBOs
    glGenVertexArrays(VAOS_AMOUNT, &Levitate::Renderer::VAOs[0]);
    glGenBuffers(VBOS_AMOUNT, &Levitate::Renderer::VBOs[0]);
    // Allocate memory for the text characters VBO
    glBindVertexArray(Levitate::Renderer::VAOs[Levitate::Renderer::VAO_TEXT]);
    glBindBuffer(GL_ARRAY_BUFFER, Levitate::Renderer::VBOs[Levitate::Renderer::VBO_GLYPH]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 24, nullptr, GL_DYNAMIC_DRAW);
}

void Levitate::Renderer::GenerateTexture(const FT_GlyphSlot glyph_slot, unsigned int& texture_id_out)
{ texture_id_out = Levitate::Renderer::GenerateTexture(glyph_slot); }

const unsigned int Levitate::Renderer::GenerateTexture(const FT_GlyphSlot glyph_slot)
{
    unsigned int texture_id_out;
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glGenTextures(1, &texture_id_out);
    glBindTexture(GL_TEXTURE_2D, texture_id_out);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RED, glyph_slot->bitmap.width, glyph_slot->bitmap.rows, 0, GL_RED, GL_UNSIGNED_BYTE, glyph_slot->bitmap.buffer);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    return texture_id_out;
}

void Levitate::Renderer::BufferRenderCommand(Levitate::TextRenderCmd render_command)
{
    if(render_command.invalid())
        return;
    Levitate::Renderer::text_render_commands.insert(Levitate::Renderer::text_render_commands.end(), render_command);
}

void Levitate::Renderer::DrawText(const Levitate::GLShader& shader)
{
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDisable(GL_CULL_FACE);
    glBindVertexArray(Levitate::Renderer::VAOs[Levitate::Renderer::VAO_TEXT]);
    shader.setUniform("ortho_matrix", Levitate::Renderer::orthographic_matrix);
    for(auto rendercmd_iterator = Levitate::Renderer::text_render_commands.begin() ; rendercmd_iterator != Levitate::Renderer::text_render_commands.end();)
    {
        shader.setUniform("text_color", rendercmd_iterator->color);
        Font& font = Levitate::Text::all_fonts.at(Verdana_ttf.idString());
        const float init_position_x = rendercmd_iterator->position_x;
        std::string global_buffer = Levitate::E_Scape::getGlobalBuffer();
        for(std::string::const_iterator character_iterator = global_buffer.begin() ; character_iterator != global_buffer.end() ; character_iterator++)
        {
            if(*character_iterator == '\n')
            {
                rendercmd_iterator->position_x = init_position_x;
                rendercmd_iterator->position_y -= font.character_set.at('0').size_y * rendercmd_iterator->scale;
                continue;
            }
            const Character &character = font.character_set.at(*character_iterator);
            float x_position = rendercmd_iterator->position_x + character.bearing_x * rendercmd_iterator->scale;
            float y_position = rendercmd_iterator->position_y - (character.size_y - character.bearing_y) * rendercmd_iterator->scale;
            float width = character.size_x * rendercmd_iterator->scale;
            float height = character.size_y * rendercmd_iterator->scale;
            float vertices[24] =
            {
                x_position        , y_position + height, 0.0f, 0.0f,
                x_position        , y_position         , 0.0f, 1.0f,
                x_position + width, y_position         , 1.0f, 1.0f,
                x_position        , y_position + height, 0.0f, 0.0f,
                x_position + width, y_position         , 1.0f, 1.0f,
                x_position + width, y_position + height, 1.0f, 0.0f,
            };

            glBindTextureUnit(0, character.texture_id);
            glBindBuffer(GL_ARRAY_BUFFER, Levitate::Renderer::VBOs[Levitate::Renderer::VBO_GLYPH]);
            glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(vertices), &vertices);
            glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), (void*)(0));
            glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), (void*)(2 * sizeof(float)));
            glEnableVertexAttribArray(0);
            glEnableVertexAttribArray(1);
            glUseProgram(shader.id);
            glDrawArrays(GL_TRIANGLES, 0, 6);

            // Advance cursors for next glyph
            rendercmd_iterator->position_x += (character.advance >> 6) * rendercmd_iterator->scale; // bitshift by 6 to get value in pixels (2^6 = 64)
        }

        rendercmd_iterator = Levitate::Renderer::text_render_commands.erase(rendercmd_iterator);
    }
    glDisable(GL_BLEND);
}