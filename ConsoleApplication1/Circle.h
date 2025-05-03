#pragma once
#include "Shape.h"
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double Area() const override {
        return M_PI * radius * radius;
    }

    std::string Name() const override {
        return "Circle";
    }
};
