#include <iostream>
#include <vector>
#include <memory>
#include "Shape.h"

using namespace std;

int main(void)
{
    shared_ptr<Shape> pShape = shared_ptr<Shape>(new Shape(0, 0));
    pShape->setName("Circle Shared Pointer");
    cout << pShape->getName() << endl;
    return 0;
}