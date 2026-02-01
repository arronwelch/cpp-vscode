#include <iostream>
using namespace std;

class ConstExample {
private:
  int m_a = 1010;
public:
    int calculate(int a, int b) const; // declare const member function
    void print() const { // declare const member function
        cout << "m_a = " << m_a << endl;
    }
    void setA(int a) {
        m_a = a;
    }
};

int ConstExample::calculate(int a, int b) const { // define const member function
    // m_a++; // Error: cannot modify member variable in const member function
    print(); // OK: can call other const member functions
    return a + b;
}

int main() {
    ConstExample ce;
    int a = 10;
    int b = 20;
    int c = ce.calculate(a, b); // OK: call const member function
    cout << a << " + " << b << " = " << c << endl;
    ce.print(); // OK: call const member function

    const ConstExample cce; // const object
    cce.print(); // OK: can call const member function on const object
    c = cce.calculate(a, b); // OK: can call const member function on const object
    cout << a << " + " << b << " = " << c << endl;

    // cce.setA(2020); // Error: cannot call non-const member function on const object
    ce.setA(3030); // OK: can call non-const member function on non-const object

    return 0;
}