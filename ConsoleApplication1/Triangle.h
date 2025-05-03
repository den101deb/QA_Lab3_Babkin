#pragma once
#include "Shape.h"

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    double Area() const override {
        return 0.5 * base * height;
    }

    std::string Name() const override {
        return "Triangle";
    }
};
