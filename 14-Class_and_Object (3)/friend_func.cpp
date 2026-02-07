#include <iostream>
using std::cout, std::endl;

class A {
private:
    int m_value;
public:
    A() : m_value(0) {}

    friend int increase(A& obj);
};
int increase(A& obj) {
    obj.m_value++; // Accessing private member of A through an object of A
    return obj.m_value;
}

int main() {
    A a;
    cout << increase(a) << endl;
    return 0;
}