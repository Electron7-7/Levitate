#ifndef LEVITATE_RENDERING
#define LEVITATE_RENDERING
#include <string>
#include <glm/fwd.hpp>

struct GLShader
{
public:
    unsigned int id = 0;

    GLShader() = default;
    GLShader(std::string, std::string);

    template<typename T> void setUniform(const std::string&, T) const;
};

extern glm::vec2 main_window_size;
#endif