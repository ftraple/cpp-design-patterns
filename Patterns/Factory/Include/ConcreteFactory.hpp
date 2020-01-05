#ifndef CONCRETE_FACTORY_HPP
#define CONCRETE_FACTORY_HPP

#include <ostream>
#include <cmath>

struct PointC {

    public:

    float x;
    float y;

    friend std::ostream& operator<<(std::ostream& out, const PointC& point) {
        out << "x: " << point.x << " y: " << point.y;
        return out;
    }

    private:

    // ### This violate the open/close principle ###
    friend class ConcreatePointCFactory;

    PointC(float x, float y) : x(x), y(y) {}

};

struct ConcreatePointCFactory {
    // Cartesian factory method
    static PointC NewCartesian(float x, float y) {
        return PointC{x, y};
    }

    // Polar factory method
    static PointC NewPolar(float r, float theta) {
        return PointC{r*std::cos(theta), r*std::sin(theta)};
    }
};

#endif // FACTORY_METHOD_HPP