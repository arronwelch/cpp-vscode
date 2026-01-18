#pragma once

#include <iostream>
#include "shape.h"
using namespace std;

class ShapeGenerator
{
protected:
    string name;

public:
    virtual Shape *createShape() = 0; // pure virtual function
    const string &getName()
    {
        return name;
    }
};

class RectangleGenerator : public ShapeGenerator
{
public:
    RectangleGenerator()
    {
        name = "Rectangle";
    }
    virtual Shape *createShape()
    {
        float width, height;
        cout << "Please input Rectangle's width:";
        cin >> width;
        cout << "Please input Rectangle's height:";
        cin >> height;
        return new Rectangle(width, height);
    }
};

class CircleGenerator : public ShapeGenerator
{
public:
    CircleGenerator()
    {
        name = "Circle";
    }
    virtual Shape *createShape()
    {
        cout << "Please input Circle's radius:";
        float radius;
        cin >> radius;
        return new Circle(radius);
    }
};

class TriangleGenerator : public ShapeGenerator
{
public:
    TriangleGenerator()
    {
        name = "Triangle";
    }
    virtual Shape *createShape()
    {
        cout << "Please input Triangle's first side:";
        float a;
        cin >> a;
        cout << "Please input Triangle's second side:";
        float b;
        cin >> b;
        cout << "Please input Triangle's third side:";
        float c;
        cin >> c;
        return new Triangle(a, b, c);
    }
};