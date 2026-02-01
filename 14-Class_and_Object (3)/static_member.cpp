#include <iostream>
using namespace std;

class Demo {
public:
    void cheer();
private:
    static unsigned int count; // static member variable, shared by all objects of the class(only one in a entire program)
    unsigned int a; // non-static member variable(instance variable, each object has its own copy)
public:
    static void hello(); // static member function, can be called without an object of the class
};

unsigned int Demo::count = 0; // definition and initialization of static member variable
void Demo::hello() { // definition of static member function
    cout << "hello:{" << endl;
    cout << "count = " << count << endl; // can access static member variable
    // cout << "a = " << demo.a << endl; // error: cannot access non-static member variable
    cout << "}" << endl;
}

void Demo::cheer() { // definition of non-static member function
    cout << "cheer: {" << endl;
    cout << "count = " << ++count << endl; // can access static member variable
    cout << "a = " << a << endl; // can access non-static member variable
    cout << "}" << endl;
}

int main(void) {
    Demo demo;
    demo.cheer(); // call non-static member function
    Demo::hello(); // call static member function
    demo.cheer(); // call non-static member function
    return 0;
}
