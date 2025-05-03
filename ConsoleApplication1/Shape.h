#pragma once
#include <string>

class Shape {
public:
    virtual double Area() const = 0;        // Абстрактный метод площади
    virtual std::string Name() const = 0;   
    virtual ~Shape() {}                     
};
