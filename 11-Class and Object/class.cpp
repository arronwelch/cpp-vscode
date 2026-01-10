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
    int *m_pValue;
    int *pInt;
    // Shape(); // default constructor in private section
    // cannot be called from derived class or from outside
    // must use some function to create object

public:

    // Constructor function is called when an object is created
    // it has same name as class
    // it can be overloaded(same function name, but has different parameters)
    // Shape(); // default constructor, if omitted
    Shape() : shapeName("Default"), positionX(0), positionY(0) { // initialize variables
        m_pValue = new int(0);
        pInt = new int(0);
    }
    Shape(int x, int y) : positionX(x), positionY(y) {};

    // Shape(const Shape& other); // default copy constructor, if omitted
    Shape(const Shape &other) {
        shapeName = other.shapeName;
        positionX = other.positionX;
        positionY = other.positionY;
        m_pValue = new int(*other.m_pValue); // new memory for pointer copying, not just copying pointer
        pInt = new int(*other.pInt);
    }

    // Destructor function is called when an object is destroyed
    // it has same name as class, but with '~' prefix
    ~Shape() // destructor function
    {
        delete m_pValue;
        delete pInt;
    }

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

    Shape shape2;// call default constructor to create object name 'shape2'
    shape2.setName("Rectangle");

    // Note: 'shape' and 'shape2' are different objects

    Shape shape3(); // this is not a constructor call, it is a function declaration

    Shape shape4 = shape; // (copy initialization) call copy constructor to create object name 'shape4'
    Shape shape5(shape); // (direct initialization) call copy constructor to create object name 'shape5'
    Shape shape6 = Shape(shape); // call copy constructor to create object name 'shape6'
    Shape *pShape7 = new Shape(shape);  // call copy constructor to create object name 'shape7'
    delete pShape7;

    return 0;  // add return statement
}