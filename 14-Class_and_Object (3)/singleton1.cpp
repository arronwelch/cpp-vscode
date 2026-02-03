#include <iostream>

class A {
public:
    static A& getInstance();
    setup();

private:
    A(); // constructors in private section
    A(const A& rhs);
};

A::setup() {
    // do something
}

A& A::getInstance() {
    static A instance;
    return instance;
}

int main() {
    A::getInstance().setup();

    return 0;
}