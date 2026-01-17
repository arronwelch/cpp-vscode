#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0; // Pure virtual function
};

class Polygon : public Shape
{
public:
    virtual void draw() { cout << "Drawing a polygon" << endl; }
};

int main()
{
    Shape *shape = new Polygon();
    shape->draw(); // Calls Polygon's draw method
    delete shape;
}