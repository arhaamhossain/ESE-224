#include <iostream>
#include "Rectangle.h"

int main() {

    Rectangle rect1;
    std::cout << "Default Rectangle:" << std::endl;
    std::cout << "Length: " << rect1.getLength() << std::endl;
    std::cout << "Width: " << rect1.getWidth() << std::endl;
    // std::cout << "Area: " << rect1.area() << std::endl;
    // std::cout << "Perimeter: " << rect1.perimeter() << std::endl;

    return 0;
}