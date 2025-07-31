#ifndef RENDERING_H
#define RENDERING_H

#include <glm/fwd.hpp>

struct GLShader
{
public:
    typedef unsigned char ShaderError;

    struct ShaderStatus
    {
        inline static ShaderError NO_ERROR              = 0b0001;
        inline static ShaderError ERROR_VERTEX_SHADER   = 0b0010;
        inline static ShaderError ERROR_FRAGMENT_SHADER = 0b0100;
        inline static ShaderError ERROR_SHADER_PROGRAM  = 0b1000;
    };

    GLShader();
    GLShader(const char* VertexShaderString, const char* FragmentShaderString);

    ShaderError LoadFromMemory(const char* VertexShaderString, const char* FragmentShaderString);
    ShaderError LoadFromFile(const char* VertexShaderPath, const char* FragmentShaderPath);
    template<typename T> void setUniform(const char*, T) const;
    unsigned int GetID() const;

    static bool CompileErrorHandler(const unsigned int ShaderID);
    static bool LinkingErrorHandler(const unsigned int ProgramID);

private:
    unsigned int _id = 0;
};

#endif // RENDERING_H
