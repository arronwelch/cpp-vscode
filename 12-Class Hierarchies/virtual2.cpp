#include <iostream>
#include <vector>
using namespace std;

class Polygon
{
public:
    virtual void draw() {
        cout << "Polygon" << endl;
    }
    // virtual void draw() = 0; // pure virtual function makes Polygon an abstract class
};

class Square : public Polygon
{
public:
    void draw()
    {
        cout << "Square" << endl;
    }
};

class Circle : public Polygon
{
public:
    void draw()
    {
        cout << "Circle" << endl;
    }
};

class Triangle : public Polygon
{
public:
    void draw()
    {
        cout << "Triangle" << endl;
    }
};

int main()
{
    Square square;
    Circle circle;
    Triangle triangle;

    Polygon* poly1 = &square;
    Polygon* poly2 = &circle;
    Polygon* poly3 = &triangle;

    // poly1->draw();
    // poly2->draw();
    // poly3->draw();

    vector<Polygon*> polygons = {poly1, poly2, poly3};
    for(auto polygon : polygons) {
        polygon->draw();
    }


    return 0;
}
