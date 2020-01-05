#ifndef FACTORY_METHOD_HPP
#define FACTORY_METHOD_HPP

#include <ostream>
#include <cmath>

struct PointM {

    public:

    float x;
    float y;
    // Cartesian factory method
    static PointM NewCartesian(float x, float y) {
        return PointM{x, y};
    }

    // Polar factory method
    static PointM NewPolar(float r, float theta) {
        return PointM{r*std::cos(theta), r*std::sin(theta)};
    }

    friend std::ostream& operator<<(std::ostream& out, const PointM& point) {
        out << "x: " << point.x << " y: " << point.y;
        return out;
    }

    private:

    PointM(float x, float y) : x(x), y(y) {}

};

#endif // FACTORY_METHOD_HPP