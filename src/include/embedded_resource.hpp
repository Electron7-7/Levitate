#ifndef LEVITATE_EMBEDDED_RESOURCE
#define LEVITATE_EMBEDDED_RESOURCE
#include <string_view>
struct EmbeddedResource
{
    const std::string_view id;
    const unsigned int length;
    const char* data;

    constexpr EmbeddedResource(const std::string_view init_id, const unsigned int init_length, const char* init_data)
    : id(init_id), length(init_length), data(init_data)
    {}

    const unsigned char* dataUnsigned() const { return reinterpret_cast<const unsigned char*>(data); }
};
#endif