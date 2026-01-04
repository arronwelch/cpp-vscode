#include <iostream>
#include <memory>
using namespace std;

int main()
{
    {
        int a = 13;
        const int *p = &a; // p is a const pointer
        // means that the value of a cannot be changed through p
        // *p = 10; // Error: assignment of read-only location '* p'

        // but we can change the value of a through a-self
        a = 10;
        cout << "*p = " << *p << endl;
    }
    {
        const int a = 13;
        // int *p = &a; // Error: cannot convert 'const int*' to 'int*' in assignment
        int *p = const_cast<int *>(&a);
        *p = 10;
        cout << "*p = " << *p << endl;
    }

    // "int*" can be converted to "const int*"
    // but "const int*" cannot be converted to "int*"
    // other forced conversions are allowed

    {
        int a[] = {13, 12, 11, 10};
        int* const p = a;
        p[0] = 100; // OK
        cout << "p[0] = " << p[0] << endl;
        *p = 101; // OK
        cout << "*p = " << *p << endl;
        // p++; // Error: increment of read-only variable 'p'
    }

    // shared pointer
    // it is a pointer that can be shared by multiple variables
    // and automatically delete
    {
        shared_ptr<int> p1(new int(10)); // compiler allocates memory for const int 10 in the heap
        // and creates a shared pointer p1 to it
        shared_ptr<int> p2 = p1;
        // and p2 is a shared pointer to the same memory
        cout << "*p1 = " << *p1 << endl;
        cout << "*p2 = " << *p2 << endl;
    }
}