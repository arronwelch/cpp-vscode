
// override:
// when a derived class redefines a base class function
// with the same name and same parameters, it is called overriding.
// use the override specifier to indicate that a member function is meant to override a base class function.
// if the base class function is not found, the compiler will generate an error.

#include <iostream>
using namespace std;

class BaseClass {
    public:
        virtual int DoSomething(int val) {
            cout << "BaseClass::DoSomething(" << val << ")" << endl;
            return val;
        }
};

class DerivedClass : public BaseClass {
    public:
        virtual int DoSomething(int val) override { // override specifier to explicitly push the compiler to check for overriding
            cout << "DerivedClass::DoSomething(" << val << ")" << endl;
            return val;
        }
};

int main() {
    BaseClass *base = new DerivedClass();
    cout << base->DoSomething(5) << endl;
    delete base;
    return 0;
}
