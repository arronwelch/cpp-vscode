#include <iostream>
using namespace std;

// pointer syntax:
// "char *p;" p is a pointer variable to a character

int main()
{
    {
        char a = 'A';
        char *p = &a; // p is a pointer to a('A')
        cout <<
        "a: " << a << endl <<
        "p: " << (long long)p << endl <<
        "*p: " << *p << endl;

        *p = 'B'; // change the value of a( * is dereference operator)

        cout <<
        "a: " << a << endl <<
        "p: " << (long long)p << endl <<
        "*p: " << *p << endl;
    }

    {
        int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7};
        int *p = numbers;
        cout <<
        "numbers[0]: " << numbers[0] << endl <<
        "p: " << (long long)p << endl <<
        "*p: " << *p << endl <<
        "p[0]" << p[0] << endl <<
        "p[1]" << p[1] << endl;
        p++; // p from pointer to numbers[0] move to pointer to numbers[1]
        cout << "*p: " << *p << endl;
        cout << "*(p+3): " << *(p+3) << endl; // p+3 move to pointer to numbers[4]
        // *(p+7) over the array, will cause a crash
        // cout << "*(p+7): " << *(p+7) << endl; // p+7 move to pointer to numbers[8], which is out of array
    }

    {
        int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7};
        int *p = (int*)&numbers;
        char *q = (char*)&numbers;

        cout << "Address of p: 0x" << hex << (long long) p << endl;
        cout << "Address of q: 0x" << hex << (long long) q << endl;

        ++p; // step to next int(4 bytes)
        ++q; // step to next char(1 byte)

        cout << "Address of p: 0x" << hex << (long long) p << endl;
        cout << "Address of q: 0x" << hex << (long long) q << endl;

    }
}