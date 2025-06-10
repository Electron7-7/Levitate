#ifndef LEVITATE_EMBEDDED_RESOURCE
#define LEVITATE_EMBEDDED_RESOURCE
struct EmbeddedResource
{
public:
    constexpr EmbeddedResource(int ResourceID, unsigned int DataLength, const unsigned char Data[])
    : _id(ResourceID), _data(Data), _data_length(DataLength)
    {}

    EmbeddedResource(int ResourceID, const char* StringData)
    : _id(ResourceID), _data(0), _string_data(StringData), _data_length(0)
    {}

    const int ID() const { return _id; }
    const bool HasData() const { return (_data != 0); }
    const bool HasStringData() const { return (_string_data != 0); }
    const unsigned char* Data() const { return _data; }
    const char* StringData() const { return _string_data; }
    const unsigned int DataLength() const { return _data_length; }

private:
    int _id = 0;
    const unsigned char* _data = 0;
    const char* _string_data = 0;
    unsigned int _data_length = 0;
};
#endif