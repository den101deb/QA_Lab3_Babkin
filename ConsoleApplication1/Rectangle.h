#pragma once
#include "Shape.h"

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double Area() const override {
        return width * height;
    }

    std::string Name() const override {
        return "Rectangle";
    }
};
