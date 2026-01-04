#include <iostream>
using namespace std;

int main()
{
    {
        // using 'new' operator to dynamically allocate memory for variables
        // is different from normal variables
        // because they are allocated in the heap memory
        // and normal variables are allocated in the stack memory

        char* p1  = new char; // uninitialized, garbage value
        int* p2 = new int(2); // initialized to 2
        char* p3 = new char[5]; // uninitialized, garbage value
        char* p4 = new char[5]{'a','b','c','d','\0'}; // initialized to 'a', 'b', 'c', 'd', 'e'

        cout << "*p1: " << *p1 << endl;
        cout << "*p2: " << *p2 << endl;
        cout << "p3: " << p3 << endl;
        cout << "p4: " << p4 << endl;

        // freeing memory
        // if forget to free memory, it will cause memory leak

        delete p1;
        delete p2;
        delete[] p3; // delete array
        delete[] p4; // delete array

        // in c language, ww use 'malloc' and 'free' to allocate and free memory
        // using 'malloc' allocate memory cannot be freed by 'delete'
        // visit freed variable will cause undefined behavior
    }
}