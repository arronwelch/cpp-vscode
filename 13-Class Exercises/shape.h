#pragma once

#define PI 3.1415926f
#include <cmath>
#include <string>
using namespace std;

class Shape
{
public:
    virtual float area() = 0;      // Pure virtual function
    virtual float perimeter() = 0; // Pure virtual function
    virtual const string& getShapeName() = 0; // Pure virtual function
    virtual ~Shape() {}            // Virtual destructor
};

class Rectangle : public Shape
{
private:
    float m_width;
    float m_height;
    string m_shapeName = "Rectangle";

public:
    virtual float area()
    {
        return m_width * m_height;
    }

    virtual float perimeter()
    {
        return 2 * (m_width + m_height);
    }

    virtual const string& getShapeName()
    {
        return m_shapeName;
    }

    // Rectangle(float width, float height) : m_width(width), m_height(height) {}
    Rectangle(float width, float height)
    {
        m_width = width;
        m_height = height;
    }
};

class Circle : public Shape
{

private:
    float m_radius;
    string m_shapeName = "Circle";

public:
    virtual float area()
    {
        return PI * m_radius * m_radius;
    }
    virtual float perimeter()
    {
        return 2 * PI * m_radius;
    }
    virtual const string& getShapeName()
    {
        return m_shapeName;
    }
    Circle(float radius)
    {
        m_radius = radius;
    }
};

class Triangle : public Shape
{
private:
    float m_a;
    float m_b;
    float m_c;
    string m_shapeName = "Triangle";

public:
    virtual float area()
    {
        float s = (m_a + m_b + m_c) / 2;
        return sqrt(s * (s - m_a) * (s - m_b) * (s - m_c));
    }
    virtual float perimeter()
    {
        return m_a + m_b + m_c;
    }
    virtual const string& getShapeName()
    {
        return m_shapeName;
    }
    Triangle(float a, float b, float c)
    {
        m_a = a;
        m_b = b;
        m_c = c;
    }
};