#include "l_rendering.hpp"
#include "common/labels.hpp"
#include "glad/glad.h"
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <vector>

void GLShaderErrorHandler(const unsigned int shader_id)
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
    }
}

//
// GLShader
//
GLShader::GLShader(std::string vertex_shader_code, std::string fragment_shader_code)
{
    const char *v_shader_code = vertex_shader_code.c_str();
    const char *f_shader_code = fragment_shader_code.c_str();

    unsigned int vertex, fragment;
    vertex = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertex, 1, &v_shader_code, NULL);
    glCompileShader(vertex);
    GLShaderErrorHandler(vertex);

    fragment = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragment, 1, &f_shader_code, NULL);
    glCompileShader(fragment);
    GLShaderErrorHandler(fragment);

    id = glCreateProgram();
    glAttachShader(id, vertex);
    glAttachShader(id, fragment);
    glLinkProgram(id);

    glDeleteShader(vertex);
    glDeleteShader(fragment);
}

template<> void GLShader::setUniform<bool>(const std::string &name, bool value) const
{
    glProgramUniform1i(id, glGetUniformLocation(id, name.c_str()), static_cast<int>(value));
}

template<> void GLShader::setUniform<int>(const std::string &name, int value) const
{
    glProgramUniform1i(id, glGetUniformLocation(id, name.c_str()), value);
}

template<> void GLShader::setUniform<float>(const std::string &name, float value) const
{
    glProgramUniform1f(id, glGetUniformLocation(id, name.c_str()), value);
}

template<> void GLShader::setUniform<glm::vec2>(const std::string &name, glm::vec2 value) const
{
    glProgramUniform2fv(id, glGetUniformLocation(id, name.c_str()), 1, glm::value_ptr(value));
}

template<> void GLShader::setUniform<glm::vec3>(const std::string &name, glm::vec3 value) const
{
    glProgramUniform3fv(id, glGetUniformLocation(id, name.c_str()), 1, glm::value_ptr(value));
}

template<> void GLShader::setUniform<glm::vec4>(const std::string &name, glm::vec4 value) const
{
    glProgramUniform4fv(id, glGetUniformLocation(id, name.c_str()), 1, glm::value_ptr(value));
}

template<> void GLShader::setUniform<glm::mat3>(const std::string &name, glm::mat3 value) const
{
    glProgramUniformMatrix3fv(id, glGetUniformLocation(id, name.c_str()), 1, GL_FALSE, glm::value_ptr(value));
}

template<> void GLShader::setUniform<glm::mat4>(const std::string &name, glm::mat4 value) const
{
    glProgramUniformMatrix4fv(id, glGetUniformLocation(id, name.c_str()), 1, GL_FALSE, glm::value_ptr(value));
}