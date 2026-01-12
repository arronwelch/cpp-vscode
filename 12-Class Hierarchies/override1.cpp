#include <iostream>

using namespace std;

class BaseClass {
    public:
        void greet() {
            cout << "Hello from BaseClass!" << endl;
        }
};

class DerivedClass : public BaseClass {
    public:
        void greet() {
            cout << "Hello from DerivedClass!" << endl;
        }
};

int main() {
    BaseClass baseObj;
    DerivedClass derivedObj;

    baseObj.greet();        // Calls BaseClass's greet
    derivedObj.greet();     // Calls DerivedClass's greet

    BaseClass* basePtr = &derivedObj;
    basePtr->greet();      // Calls BaseClass's greet due to static binding

    BaseClass& baseRef = derivedObj;
    baseRef.greet();       // Calls BaseClass's greet due to static binding

    return 0;
}