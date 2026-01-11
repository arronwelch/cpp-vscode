#include <iostream>
using namespace std;

class BaseClass{
    public:
        BaseClass(int a) {
            cout << "BaseClass Constructor" << endl;
        }
        /* --- */
};

class SubClass : public BaseClass {
    public:
        SubClass() : BaseClass(0) {
            cout << "SubClass Constructor" << endl;
        }
};

int main(void)
{
    SubClass obj;
}