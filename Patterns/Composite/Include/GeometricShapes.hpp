#ifndef GEOMETRIC_SHAPES_HPP
#define GEOMETRIC_SHAPES_HPP

#include <iostream>
#include <string>
#include <vector>

namespace gs {
    struct GraphicObject {
        virtual void draw() = 0;
    };

    struct Circle: GraphicObject {
        void draw() override {
            std::cout << "Circle" << std::endl;
        }
    };

    struct Square: GraphicObject {
        void draw() override {
            std::cout << "Square" << std::endl;
        }
    };

    struct Rectangle: GraphicObject {
        void draw() override {
            std::cout << "Rectangle" << std::endl;
        }
    };

    struct Group: GraphicObject {
        std::string name;
        std::vector<GraphicObject*> objects;

        Group(const std::string& name): name{name} {};

        void draw() override {
            std::cout << "Group: " << name << std::endl;
            for (auto&& object: objects ) {
                object->draw();
            }
        }
    };
}

#endif // GEOMETRIC_SHAPES_HPP