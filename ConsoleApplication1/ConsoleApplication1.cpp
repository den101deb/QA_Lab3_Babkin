#include <iostream>
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main() {
    std::vector<Shape*> shapes;

    shapes.push_back(new Circle(5));
    shapes.push_back(new Rectangle(4, 6));
    shapes.push_back(new Triangle(3, 7));

    for (Shape* shape : shapes) {
        std::cout << shape->Name() << " area: " << shape->Area() << std::endl;
        delete shape; 
    }

    return 0;
}
