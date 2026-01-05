// class.cpp
#include <iostream>
#include <memory>
using namespace std;

// Class syntax:
// class <name> { <body> }
// { <body> }
// default <access_modifier> is private type
// public ---> it is accessible from everywhere
// private ---> it is accessible only from inside the class
// protected ---> it is accessible from inside the class and from derived classes

// class <name> {
// <access_modifier> <type> <variable_name> = <value>;
// <access_modifier> <type> <function_name>(<parameters>) <function_body>;

// omitted access modifier is private
// <variable>
// <function>
// public:
// <variable>
// <function>
// private:
// <variable>
// <function>
// protected:
// <variable>
// <function>
// }; // simicolon to end class

class Shape
{
protected:
    std::string shapeName;

private:
    int positionX, positionY;

public:
    Shape(int x, int y) : positionX(x), positionY(y) {};
    const string &getName()
    { // function return a const reference of string type
        // use reference to avoid copying
        // use const to avoid modification of the source string 'shapeName'
        return shapeName;
    }
    void setName(const string &name)
    {
        shapeName = name;
    }
    float area() // This is inline function
    {
        // coding in here
        return 0.0f;
    };
    bool draw();
};
bool Shape::draw()
{
    // coding in here
    return true;
}

int main()
{
    Shape shape(0, 0);  // supply for parameters
    shape.setName("Circle"); // '.' is operator of member access
    cout << shape.getName() << endl;

    Shape* pShape = new Shape(0, 0);
    pShape->setName("Circle Pointer"); // '->' is operator of member access
    cout << pShape->getName() << endl;
    delete pShape; // DO NOT FORGET TO DELETE POINTER

    shared_ptr<Shape> pShape_shared = shared_ptr<Shape>(new Shape(0, 0));
    pShape_shared->setName("Circle Shared Pointer");
    // cout << pShape_shared->getName() << endl;
    const string &name = pShape_shared->getName();
    cout << name << endl;
    // automatic delete when pShape_shared goes out of scope

    return 0;  // add return statement
}