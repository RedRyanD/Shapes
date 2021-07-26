#include <iostream>
#include "Shape.h"
#include "Circle.h"

void ShowArea(Shape& shape);

int main()
{

    Circle circle(10);
    ShowArea(circle);


    return 0;
}

void ShowArea(Shape& shape){
    std::cout << "Area: " << shape.Area() << "\n";
}