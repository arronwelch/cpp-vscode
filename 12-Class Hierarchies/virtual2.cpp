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
    
    cout << "Using const auto& - showing address of polygon reference:" << endl;
    for(const auto& polygon : polygons) {
        cout << "Address of polygon reference: " << &polygon << ", Value (pointer): " << polygon << endl;
        polygon->draw();
    }

    cout << "\nUsing auto (copy) - showing address of polygon copy:" << endl;
    for(auto polygon : polygons) {
        cout << "Address of polygon copy: " << &polygon << ", Value (pointer): " << polygon << endl;
        polygon->draw();
    }


    return 0;
}