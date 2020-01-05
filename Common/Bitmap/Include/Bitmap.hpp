#ifndef BITMAP_HPP
#define BITMAP_HPP
#include <iostream>
#include <cstdint>
#include <memory>

#pragma pack(2) // Avoid padding
struct BitmapFileHeader {
    char header[2]{'B', 'M'};
    int32_t fileSize;
    int32_t reserver{0};
    int32_t dataOffset;
};

#pragma pack(2) // Avoid padding
struct BitmapInfoHeader {
    int32_t headerSize{40};
    int32_t width;
    int32_t height;
    int16_t planes{1};
    int16_t bitsPerPixel{24};
    int32_t compression{0};
    int32_t dataSize{0};
    int32_t horizontalResolution{2400};
    int32_t verticalResolution{2400};
    int32_t colors{0};
    int32_t importColors{0};
};

class Bitmap {
    private:

    int m_width{0};
    int m_height{0};
    std::unique_ptr<uint8_t[]> m_pixels{nullptr};

    public:

    Bitmap(int width, int height);

    bool save(const std::string& fileName);
    
    void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);

    ~Bitmap();

};

#endif // BITMAP_HPP