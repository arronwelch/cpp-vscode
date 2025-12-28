#include <iostream>
using namespace std;

int main()
{

    {
        int result = 0;
        int i;
        for (i = 0; i < 10; i++)
        {
            result += i;
        }
        cout << "result: " << result << endl;
    }

    // initialization and update can have multiple "," operators
    {
        int result = 0;
        int i, j;
        for (i = 1, j = 10; i < 10; i++, j--)
        {
            result += i * j;
            cout << "i: " << i << " j: " << j << endl;
            cout << "result: " << result << endl;
        }
    }

    {
        int i = 0;
        for(; i < 10; i++)
        {
            cout << "i: " << i << endl;
        }
    }

    {
        int i = 0;
        int result = 0;
        for(;;) { // infinite loop
            i++;
            if (i>=10) {
                break;
            }
            result += i;
        }
    }

    {
        int i = 0;
        int result = 0;
        for(;;) {
            i++;
            if (i>=10) {
                break;
            }

            if (i%3==0) {
                continue; // skip multiples of 3
            }
            result += i;
        }
    }

    {
        int n = 10;
        while( n > 0 ) {
            cout << "n: " << n << endl;
            --n;
        }
    }

    {
        int n = 10;
        for(; n > 0; ) {
            cout << "n: " << n << endl;
            --n;
        }
    }

    {
        int k = 10;
        do {
            cout << "k: " << k << endl;
            --k;
        } while( k > 0 ); // note the semicolon here
    }

    // range-based for loop
    {
        int arr[] = {10, 20, 30, 40, 50};
        int result = 0;
        for (auto x : arr) { // syntax in c++11 and later
            result += x;
        }
        cout << "result: " << result << endl;
    }

    return 0;
}