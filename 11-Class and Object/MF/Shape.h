
#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
protected:
    std::string shapeName;
    int positionX, positionY;
public:
    Shape(int x, int y);
    float area();
    int draw() { return -1;}
    const std::string &getName();
    void setName(const std::string &name);
};

#endif // SHAPE_H