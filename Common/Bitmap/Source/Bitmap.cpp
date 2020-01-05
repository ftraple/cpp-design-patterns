#include <fstream>
#include "Bitmap.hpp"

Bitmap::Bitmap(int width, int height):
    m_width(width), m_height(height),
    m_pixels(new uint8_t[width*height*3]{}) {}

Bitmap::~Bitmap(){}

bool Bitmap::save(const std::string& fileName) {

    // Populate headers
    BitmapFileHeader fileHeader;
    fileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) + (m_width*m_height*3);
    fileHeader.dataOffset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

    BitmapInfoHeader infoHeader;
    infoHeader.width = m_width;
    infoHeader.height = m_height;

    // Write to file
    std::ofstream outFile(fileName, std::ios::binary);
    if (!outFile) {
        return false;
    }
    outFile.write((const char*)&fileHeader, sizeof(fileHeader));
    outFile.write((const char*)&infoHeader, sizeof(infoHeader));
    outFile.write((const char*)m_pixels.get(), (m_width*m_height*3)); // TODO Use appropiate cast
    outFile.close();
    return true;
}

void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {
    uint8_t* pPixel = m_pixels.get() + (y*3*m_width)+(x*3);
    pPixel[0] = blue;
    pPixel[1] = green;
    pPixel[2] = red;
}