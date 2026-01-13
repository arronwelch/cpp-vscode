#include <iostream>
using namespace std;

class BaseClass{
    public:
        virtual void greet() {
            cout << "greet() for BaseClass called virtual function" << endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        virtual void greet() {
            cout << "greet() for DerivedClass called virtual function" << endl;
        }
};

int main() {
    DerivedClass derived_class_object;

    // Polymorphism through base class pointer and reference
    BaseClass *base_class_pointer = &derived_class_object;
    BaseClass& base_class_ref = derived_class_object;

    derived_class_object.greet();
    base_class_pointer->greet();
    base_class_ref.greet();

    // Polymorphic conditions are met:
    // 1. Base class member function has virtual keyword
    // 2. pulic inheritance derivedclass from baseclass
    // 3. derivedclass overrides baseclass virtual member function
    // 4. base class pointer or reference points to derived class object

    return 0;
}