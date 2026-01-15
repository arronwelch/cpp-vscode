#include <iostream>
using namespace std;

class BaseClass {
    public:
        BaseClass() {
            cout << "BaseClass()" << endl;
        }
        ~BaseClass() {
            cout << "~BaseClass()" << endl;
        }
};

class SubClass : public BaseClass {
    public:
        SubClass() {
            cout << "SubClass()" << endl;
        }
        ~SubClass() {
            cout << "~SubClass()" << endl;
        }
};

int main(void)
{
    BaseClass *ptr = new SubClass();
    delete ptr; // Undefined behavior: BaseClass destructor is not virtual
}