#include <iostream>
#include <vector>

#include "GeometricShapes.hpp"

int main() {

    std::cout <<  "Composite Pattern Test\n";
    std::cout <<  "----------------------------------------\n";

    gs::Group root("root");
    gs::Circle c1, c2;
    root.objects.push_back(&c1);
    root.objects.push_back(&c2);

    gs::Group subGroup1("SubGroup_1");
    gs::Square s1, s2, s3;
    subGroup1.objects.push_back(&s1);
    subGroup1.objects.push_back(&s2);
    subGroup1.objects.push_back(&s3);

    gs::Group subGroup2("SubGroup_2");
    gs::Rectangle r1, r2;
    subGroup2.objects.push_back(&r1);
    subGroup2.objects.push_back(&r2);

    root.objects.push_back(&subGroup1);
    subGroup1.objects.push_back(&subGroup2);

    root.draw();

    std::cout << '\n';
    return EXIT_SUCCESS;
}
