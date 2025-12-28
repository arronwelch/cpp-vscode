#include <iostream>
using namespace std;

int main() {

    {
        // Array is a collection of variables of the same type
        // all stored in contiguous memory locations
        // Array elements can be accessed using an index
        // Array indexing starts from 0
        // Array size must be known at compile time
        // Array can be declared using two syntaxes

        // Array declaration syntax
        // type identifier [ size ];
        const int nSize = 10;
        // size must be a constant expression
        // constant value
        // or const variable)
        int weights[nSize];
    }

    {
        // Array initialization syntax
        // type identifier [ size ] = { values };
        // Initialize all elements to zero
        int weights[5] = { 0 };
        int idx = 0;
        for(auto x : weights) {
            // x is a copy of the element
            cout << "weights[" << idx << "]: " << x << endl;
            idx++;
        }
    }

    {
        // Array initialization syntax
        // type identifier [ size ] = { values };
        // Initialize all elements to zero
        int weights[5] = {}; // same as above, all elements to zero
        int idx = 0;
        for(auto x : weights) {
            // x is a copy of the element
            cout << "weights[" << idx << "]: " << x << endl;
            idx++;
        }
    }


}