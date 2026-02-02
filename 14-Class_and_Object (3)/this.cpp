#include <iostream>
using namespace std;
// Demonstration of 'this' pointer in C++ class member functions
// 'this' is an implicit pointer available in all non-static member functions
// this->member_variable
// (*this).member_variable

class Complex {
private:
    float r;
    float i;

public:
    Complex(float r, float i) {
        this->r = r; // "->" operator used with 'this' pointer
        (*this).i = i; // "*" operator used with 'this' pointer
    };
    Complex& add(const Complex& other) {
        i += other.i;
        r += other.r;
        return *this; // return the current object by dereferencing 'this' pointer
    }
    void print() const {
        cout << r << "+" << i << "i" << endl;
    }
};

int main(void) {
    {
    Complex a(1.0, 2.0), b(2.3, -2), c(1.1, 1.3);
    a.add(b).add(c); // linked calls
    a.print();
    }

    Complex a(1.0, 2.0), b(2.3, -2), c(1.1, 1.3);
    Complex& temp = a.add(b);
    temp.add(c);
    temp.print();

    return 0;
}