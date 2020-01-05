#include <iostream>
#include <vector>
#include <memory>

#include "DrawShapes.hpp"
#include "Bitmap.hpp"

struct LineToPointerAdapter {

    LineToPointerAdapter(Line& line, Bitmap& image) {
        // no interpolation
        int left = std::min(line.start.x, line.end.x);
        int right = std::max(line.start.x, line.end.x);
        int top = std::min(line.start.y, line.end.y);
        int bottom = std::max(line.start.y, line.end.y);
        int dx = right - left;
        int dy = line.end.y - line.start.y;
        // only vertical or horizontal lines
        if (dx == 0) {
        // vertical
            for (int y = top; y <= bottom; ++y) {
                image.setPixel(left, y, 255, 255, 255);
            }
        }
        else if (dy == 0) {
            for (int x = left; x <= right; ++x) {
                image.setPixel(x, top, 255, 255, 255);
            }
        }
    }
};

int main() {

    std::cout <<  "Adapter Pattern Test\n";
    std::cout <<  "----------------------------------------\n";

    std::vector<std::shared_ptr<VectorObject>> vectorObjects {
        std::make_shared<VectorRectanlgle>(10, 10, 100, 100),
        std::make_shared<VectorRectanlgle>(30, 30, 60, 60)
    };
  

    Bitmap image(640, 480);

    for (auto& object: vectorObjects) {
        for (auto& line: *object) {
            LineToPointerAdapter lpo{line, image};
        }
    }

    image.save("build/tmp/result.bmp");

    std::cout << '\n';
    return EXIT_SUCCESS;
}
