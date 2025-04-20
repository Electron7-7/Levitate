#include "l_math.hpp"
#include "sanity.hpp"
#include <glm/glm.hpp>

//-----
// vec3
//-----
// Main constructor; all other constructors end up here
Levitate::Math::vec3::vec3(const float init_x, const float init_y, const float init_z)
: x(init_x), y(init_y), z(init_z), _data(new float[3]{init_x, init_y, init_z})
{}

Levitate::Math::vec3::vec3()
: vec3(0.0f)
{}

Levitate::Math::vec3::vec3(const float init_xyz)
: vec3(init_xyz, init_xyz, init_xyz)
{}

Levitate::Math::vec3::vec3(const float init_x, const float init_y)
: vec3(init_x, init_y, 0.0f)
{}

Levitate::Math::vec3::vec3(const glm::vec2 init_xy, const float init_z)
: vec3(init_xy[0], init_xy[1], init_z)
{}

Levitate::Math::vec3::vec3(const float init_x, const glm::vec2 init_yz)
: vec3(init_x, init_yz[0], init_yz[1])
{}

Levitate::Math::vec3::vec3(const glm::vec3 init_xyz)
: vec3(init_xyz[0], init_xyz[1], init_xyz[2])
{}

Levitate::Math::vec3::vec3(const float init_xyz[3])
: vec3(init_xyz[0], init_xyz[1], init_xyz[2])
{}

Levitate::Math::vec3::vec3(const std::vector<float> init_xyz)
{
    switch(init_xyz.size())
    {
    case 0:
        *this = vec3();
        break;
    case 1:
        *this = vec3(init_xyz[0]);
        break;
    case 2:
        *this = vec3(init_xyz[0], init_xyz[1]);
        break;
    default:
        *this = vec3(init_xyz[0], init_xyz[1], init_xyz[2]);
        break;
    }
}

float* Levitate::Math::vec3::data() const // CONTAINS MEMORY LEAK
{
    if(_data == nullptr) // To prevent garbage data returns and/or crashes, I leak a little memory if _data is null
    {
        PRINTERR("Levitate::Math::vec3::data() - vec3::_data == nullptr! Returning `new float[3]{0.0f, 0.0f, 0.0f}` (this is a memory leak!)")
        return new float[3]{0.0f, 0.0f, 0.0f};
    }
    return _data;
}

constexpr bool Levitate::Math::vec3::operator==(const vec3& compare_against) const
{
    return
    (
        x == compare_against.x &&
        y == compare_against.y &&
        z == compare_against.z
    );
}
constexpr bool Levitate::Math::vec3::operator!=(const vec3& compare_against) const { return !(*this == compare_against); }


float& Levitate::Math::vec3::operator[](const int return_index)
{
    assert((return_index < 0 || return_index > 2) && PRINTERR_INLINE("Levitate::Math::vec3::operator[] - Assert failed: index is out of range! Valid indices for a vec3 are 0, 1, or 2"));
    switch(return_index)
    {
    case 0:
        return x;
    case 1:
        return y;
    case 2:
        return z;
    default:
        PRINTERR("Levitate::Math::vec3::operator[] - Somehow, the assert passed with an invalid index! This shouldn't ever happen, but if it does it will return a reference to the vec3's `x` member.")
        return x;
    }
}

Levitate::Math::vec3::operator glm::vec3() const { return glm::vec3(x, y, z); }
Levitate::Math::vec3::operator std::vector<float>() const { return {x, y, z}; }
Levitate::Math::vec3::operator float*() const { return data(); }