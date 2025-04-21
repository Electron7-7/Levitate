#ifndef LEVITATE_EMBEDDED_RESOURCE
#define LEVITATE_EMBEDDED_RESOURCE
#include <string>
#include <string_view>
struct EmbeddedResource
{
public:
    const std::string_view id;
    const int length;
    const char* const data;

    constexpr EmbeddedResource(const std::string_view init_id, const int init_length, const char* const init_data)
    : id(init_id), length(init_length), data(init_data)
    {}

    const unsigned char* dataUnsigned()  const { return reinterpret_cast<const unsigned char*>(data);  }
    const unsigned int* lengthUnsigned() const { return reinterpret_cast<const unsigned int*>(length); }
    const std::string idString()         const { return std::string(id); }
private:
};
#endif