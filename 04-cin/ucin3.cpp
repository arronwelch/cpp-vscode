#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first integer number: ";
    cin >> a;
    cout << "Enter second integer number: ";
    cin >> b;

    // if (a % 2 == 0 && b % 2 == 0 ||
    //     a % 2 == 1 && b % 2 == 1)

    // if (a % 2 == b % 2)

    // if ( (a & 1) == (b & 1) )

    if (!(((a & 1) ^ (b & 1))))
    {
        cout << "Average of two numbers is: " << (a + b) / 2 << endl;
    }
    else
    {
        cout << "Maximum of two numbers is: " << (a > b ? a : b) << endl;
    }

    return 0;
}