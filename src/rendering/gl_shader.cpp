#include "gl_shader.hpp"
#include "common/labels.hpp"
#include "glad/glad.h"

#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <vector>
#include <cstdio>

bool GLShader::CompileErrorHandler(const unsigned int shader_id)
{
    // https://stackoverflow.com/a/63420289
    int v_result = GL_FALSE;
    int info_log_length;
    glGetShaderiv(shader_id, GL_COMPILE_STATUS, &v_result);
    glGetShaderiv(shader_id, GL_INFO_LOG_LENGTH, &info_log_length);
    if(info_log_length > 0)
    {
        std::vector<char> shader_error_message(info_log_length + 1);
        glGetShaderInfoLog(shader_id, info_log_length, nullptr, shader_error_message.data());
        printf("%s GLSL Shader Compilation Error(s):%s%s\n", ERROR, shader_error_message.data(), COLOR_RESET);
        return false;
    }
    return true;
}

bool GLShader::LinkingErrorHandler(const unsigned int program_id)
{
    // https://stackoverflow.com/a/63420289
    int v_result = GL_FALSE;
    int info_log_length;
    glGetProgramiv(program_id, GL_LINK_STATUS, &v_result);
    glGetProgramiv(program_id, GL_INFO_LOG_LENGTH, &info_log_length);
    if(info_log_length > 0)
    {
        std::vector<char> shader_error_message(info_log_length + 1);
        glGetProgramInfoLog(program_id, info_log_length, nullptr, shader_error_message.data());
        printf("%s GLSL Shader Program Link Error(s):%s%s\n", ERROR, shader_error_message.data(), COLOR_RESET);
        return false;
    }
    return true;
}

GLShader::GLShader() = default;

GLShader::GLShader(const char* vertex_shader_from_memory, const char* fragment_shader_from_memory)
{
    ShaderError shader_status = LoadFromMemory(vertex_shader_from_memory, fragment_shader_from_memory);

    if(shader_status & ShaderStatus::NO_ERROR)
        return;

    printf("%s [GLSL Shader Constructor] -", ERROR);

    if(shader_status & ShaderStatus::ERROR_VERTEX_SHADER)
        printf(" [vertex_id shader failed to compile]");
    if(shader_status & ShaderStatus::ERROR_FRAGMENT_SHADER)
        printf(" [fragment_id shader failed to compile]");
    if(shader_status & ShaderStatus::ERROR_SHADER_PROGRAM)
        printf(" [Shader Program failed to link]");

    printf("%s\n", COLOR_RESET);
}

GLShader::ShaderError GLShader::LoadFromMemory(const char* vertex_shader_string, const char* fragment_shader_string)
{
    ShaderError load_status = ShaderStatus::NO_ERROR;

    unsigned int vertex_id;
    unsigned int fragment_id;

    vertex_id = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertex_id, 1, &vertex_shader_string, nullptr);
    glCompileShader(vertex_id);
    if(!GLShader::CompileErrorHandler(vertex_id))
        load_status |= ShaderStatus::ERROR_VERTEX_SHADER;

    fragment_id = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragment_id, 1, &fragment_shader_string, nullptr);
    glCompileShader(fragment_id);
    if(!GLShader::CompileErrorHandler(fragment_id))
        load_status |= ShaderStatus::ERROR_FRAGMENT_SHADER;

    _id = glCreateProgram();
    glAttachShader(_id, vertex_id);
    glAttachShader(_id, fragment_id);
    glLinkProgram(_id);
    if(!GLShader::LinkingErrorHandler(_id))
        load_status |= ShaderStatus::ERROR_SHADER_PROGRAM;

    glDeleteShader(vertex_id);
    glDeleteShader(fragment_id);

    return load_status;
}

unsigned int GLShader::GetID() const
{ return _id; }

template<> void GLShader::setUniform<bool>(const char* name, bool value) const
{ glProgramUniform1i(_id, glGetUniformLocation(_id, name), static_cast<int>(value)); }

template<> void GLShader::setUniform<int>(const char* name, int value) const
{ glProgramUniform1i(_id, glGetUniformLocation(_id, name), value); }

template<> void GLShader::setUniform<float>(const char* name, float value) const
{ glProgramUniform1f(_id, glGetUniformLocation(_id, name), value); }

template<> void GLShader::setUniform<glm::vec2>(const char* name, glm::vec2 value) const
{ glProgramUniform2fv(_id, glGetUniformLocation(_id, name), 1, glm::value_ptr(value)); }

template<> void GLShader::setUniform<glm::vec3>(const char* name, glm::vec3 value) const
{ glProgramUniform3fv(_id, glGetUniformLocation(_id, name), 1, glm::value_ptr(value)); }

template<> void GLShader::setUniform<glm::mat3>(const char* name, glm::mat3 value) const
{ glProgramUniformMatrix3fv(_id, glGetUniformLocation(_id, name), 1, GL_FALSE, glm::value_ptr(value)); }

template<> void GLShader::setUniform<glm::mat4>(const char* name, glm::mat4 value) const
{ glProgramUniformMatrix4fv(_id, glGetUniformLocation(_id, name), 1, GL_FALSE, glm::value_ptr(value)); }
