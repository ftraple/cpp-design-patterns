#ifndef INNER_FACTORY_HPP
#define INNER_FACTORY_HPP

#include <ostream>
#include <cmath>

struct PointI {

    public:

    float x;
    float y;

    struct Factory {
        // Cartesian factory method
        static PointI NewCartesian(float x, float y) {
            return PointI{x, y};
        }

        // Polar factory method
        static PointI NewPolar(float r, float theta) {
            return PointI{r*std::cos(theta), r*std::sin(theta)};
        }
    };

    friend std::ostream& operator<<(std::ostream& out, const PointI& point) {
        out << "x: " << point.x << " y: " << point.y;
        return out;
    }

    private:

    PointI(float x, float y) : x(x), y(y) {}

};


#endif // INNER_FACTORY_HPP