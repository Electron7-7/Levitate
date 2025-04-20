#ifndef LEVITATE_MATH
#define LEVITATE_MATH
#include <vector>
#include <glm/fwd.hpp>

namespace Levitate
{
    namespace Math
    {
        struct MathContainer
        {};

        struct vec3 : public MathContainer
        {
        public:
            float x = 0.0f;
            float y = 0.0f;
            float z = 0.0f;

            vec3();
            vec3(const float);
            vec3(const float, const float);
            vec3(const float, const float, const float);
            vec3(const glm::vec2, const float = 0.0f);
            vec3(const float, const glm::vec2);
            vec3(const glm::vec3);
            vec3(const std::vector<float>);
            vec3(const float*);

            float* data() const;

            constexpr bool operator==(const vec3&) const;
            constexpr bool operator!=(const vec3&) const;

            float& operator[](const int);

            operator glm::vec3() const;
            operator std::vector<float>() const;
            operator float*() const;
        private:
            float* _data = nullptr;
        };
    }
}
#endif