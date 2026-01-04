#include <iostream>
#include <vector>
using namespace std;

// reference operator (&)
// "void swap(int &a, int &b);"
int main() {
    {
        int a = 3;
        int &b = a; // b is a reference to a
        b++;
        cout << "a: " << a << endl;
    }

    {
        int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8};

        for(auto n: numbers) { // n is a copy of the array element
            n++;
        }

        for(auto n: numbers) {
            cout << n ;
            if(n != numbers[7]) {
                cout << ", ";
            }
            else {
                cout << endl;
            }
        }
    }

    {
        int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8};

        for(auto &n: numbers) { // n is a reference can modify the original array
            n++;
        }

        for(auto n: numbers) {
            cout << n ;
            if(n != numbers[7]) {
                cout << ", ";
            }
            else {
                cout << endl;
            }
        }
    }

    {
        int a = 3;
        const int &b = a; // b is a read-only reference to a
        // b++; // error: increment of read-only reference 'b'
    }

    {
        float calculate(vector<float> values); // call by value(requires memory and computational overhead)
        float calculate(vector<float>& values); // call by reference
        float calculate(const vector<float>& values); // call by constant reference(cannot modify the original array)
    }
}
