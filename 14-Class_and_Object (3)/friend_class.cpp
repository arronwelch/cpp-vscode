#include <iostream>
using std::cout, std::endl;

class B;

class A {
private:
    int m_value;
public:
    A() : m_value(0) {}

    friend class B; // Declare B as a friend class to allow it access to private members of A
};

class B {
public:
    int inc(A& obj) {
        obj.m_value++; // Accessing private member of A through an object of A
        return obj.m_value;
    }
};

int main() {
    A a;
    B b;
    cout << b.inc(a) << endl;
    return 0;
}