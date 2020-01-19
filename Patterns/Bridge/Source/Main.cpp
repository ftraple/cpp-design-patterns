#include <iostream>
#include <vector>

#include "PimplIdiom.hpp"

struct Renderer {
    virtual void renderCircle(float x, float y, float radius) = 0;
};

struct RasterRenderer: Renderer {
    void renderCircle(float x, float y, float radius) override {
        std::cout << "Rasterizing a circle of radius " << radius << std::endl;
    }
};

struct VectorRenderer: Renderer {
    void renderCircle(float x, float y, float radius) override {
        std::cout << "Drawing a vector circle of radius " << radius << std::endl;
    }
};

struct Shape {
    protected:
    Renderer& m_renderer;
    Shape(Renderer& renderer): m_renderer(renderer) {}

    public:
    virtual void draw() = 0;
    virtual void resize(float factor) = 0;
};

struct Circle: Shape {
    float x, y, radius;

    Circle(Renderer& renderer, float x, float y, float radius):
        Shape(renderer), x{x}, y{y}, radius{radius} {}

    void draw() override {
        m_renderer.renderCircle(x, y, radius);
    }
    void resize(float factor) override {
        radius *= factor;
    }
};

int main() {

    std::cout <<  "Pimpl Idion Bridge Pattern Test\n";
    std::cout <<  "----------------------------------------\n";

    PersonA personA("Fabiano");
    personA.greet();

    std::cout << '\n';
    std::cout <<  "Bridge Pattern Test\n";
    std::cout <<  "----------------------------------------\n";

    RasterRenderer rr;
    Circle rasterCircle{rr, 5, 5, 10};
    rasterCircle.draw();
    rasterCircle.resize(2);
    rasterCircle.draw();

    std::cout << '\n';
    return EXIT_SUCCESS;
}
