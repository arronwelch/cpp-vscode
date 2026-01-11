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
    private:
        string m_className;
    public:
        SubClass() : BaseClass(0), m_className("SubClass") {
            cout << "SubClass Constructor" << endl;
        }
};

int main(void)
{
    SubClass obj;
}