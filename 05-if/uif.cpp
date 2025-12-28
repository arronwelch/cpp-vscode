#include <iostream>
using namespace std;

int main() {

    {
        int a = 3;
        int b = 4;
        if ( a > b ) { // false
            a += 1;
            b -= 1;
        }
    }

    {
        int a = 3;
        int b = 4;
        if ( a ) { // true(non-zero)
            a += 1;
            b -= 1;
        }
    }

    {
        int a = 3;
        int b = 4;
        if ( a&b ) { // 0b0011 & 0b0100 = 0b0000 -> false
            a += 1;
            b -= 1;
        }
    }

    {
        int a = 3;
        int b = 4;
        if ( a&&b ) { // a != 0 && b != 0 -> true
            a += 1;
            b -= 1;
        }
    }

    {
        int a;
        cout << "Enter an integer number: ";
        cin >> a;

        if ( a&1 ) { // odd number -> true
            cout << "You entered an odd number." << endl;
        } else {
            cout << "You entered an even number." << endl;
        }
    }

    {
        int a;
        cout << "Enter an integer number: ";
        cin >> a;

        switch (a)
        {
        case 1:
            cout << "You entered one." << endl;
            // break; // if “break” is not added, the program will continue to execute the next case
        case 2:
            cout << "You entered two." << endl;
            cout << "You entered two." << endl;
            break;
        default:
            cout << "You entered something else." << endl;
            cout << "You entered something else." << endl;
            cout << "You entered something else." << endl;
            break;
        }

    }
}