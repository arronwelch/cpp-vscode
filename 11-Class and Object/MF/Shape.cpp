#include "Shape.h"

float Shape::area() // This is out-of-line function definition
{
    // coding in here
    return 0.0f;
}

Shape::Shape(int x, int y)
{
    this->positionX = x;
    this->positionY = y;
}

const std::string &Shape::getName()
{
    return this->shapeName;
}

void Shape::setName(const std::string &name)
{
    this->shapeName = name;
}
