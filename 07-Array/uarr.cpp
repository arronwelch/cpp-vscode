#include <iostream>
#include <cstring>
#include <array>
#include <vector>
using namespace std;

int main()
{

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
        int weights[5] = {0};
        int idx = 0;
        for (auto x : weights)
        {
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
        for (auto x : weights)
        {
            // x is a copy of the element
            cout << "weights[" << idx << "]: " << x << endl;
            idx++;
        }
    }

    // partial initialization
    {
        float weights[5] = {2.1f, 4.2f}; // remaining elements initialized to zero
    }
    {
        float weights[5] = {2.1f}; // remaining elements initialized to zero
    }
    {
        float weights[5] = {0}; // all elements initialized to zero

        weights[0] = 2.1f;
        weights[4] = 4.2f;

        // weights[5] = 5.3f; // error: out of bounds
        // compiler does not check for out of bounds access
    }

    {
        char hello[] = "Hello"; // size is 6 (5 chars + null terminator)
    }
    {
        char hello[20] = "Hello";  // size is 20, remaining elements initialized to zero
        cout << hello[19] << endl; // prints null character
        if (hello[19] == '\0')
        {
            cout << "hello[19] is null character" << endl;
        }
    }
    {
        char hello[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // same as above
    }
    // string literals are null-terminated in C/C++
    {
        char hello[] = {'H', 'e', 'l', 'l', 'o'}; // no null terminator
        // hello is not a valid C-string, cannot be used with string functions
    }

    {
        char hello[] = "Hello"; // size is 6 (5 chars + null terminator)

        // using index to access char array elements
        for (int i = 0; i < sizeof(hello) / sizeof(char); i++)
        {
            cout << "hello[" << i << "]: " << hello[i] << endl;
        }
    }

    {
        char hello[] = "Hello"; // size is 6 (5 chars + null terminator)
        char c;
        int i = 0;

        while ((c = hello[i++]))
        {
            cout << "the " << i << " character is: " << c << endl;
        }
    }

    {
        char word1[] = "Hello";
        char word2[] = "Hello";

        // cannot use == operator to compare C-strings
        // such as word1 == word2 is invalid
        // because == operator compares the addresses of the two strings
        // use strcmp function instead
        // strcmp function is c++ followed from C language
        if (strcmp(word1, word2) == 0) // strcmp returns 0 if strings are equal
        {
            cout << "words are equal" << endl;
        }
        else
        {
            cout << "words are not equal" << endl;
        }
    }

    {
        string word1 = "Hello";
        string word2 = "Hello";

        // can use == operator to compare strings
        // because == operator compares the values of the two strings
        // string class is c++ specific
        if (word1 == word2)
        {
            cout << "words are equal" << endl;
        }
        else
        {
            cout << "words are not equal" << endl;
        }
    }

    {
        // c++ often uses std::array or std::vector instead of raw arrays
        // because they provide better safety and functionality
        // std::array is a fixed size array
        // array size must be known at compile time
        // array is use new and delete automatically handled
        array<int, 5> arr1 = {1, 2, 3, 4, 5};
        for (const auto &x : arr1) // & is reference to avoid copy
        {
            cout << x << endl;
        }

        // std::vector is a dynamic array
        // vector size can be changed dynamically
        // vector is use new and delete automatically handled
        vector<float> weights = {1.2f, 2.3f, 3.4f, 4.5f, 5.6f};
        for (int i = 0; i < weights.size(); i++)
        {
            cout << "weights[" << i << "]: " << weights[i] << endl;
        }


        // vector can initialized with a specific size
        // this will improve performance if size is known in advance
        vector<int> vec(10); // vector of size 10, all elements initialized to zero

        // initialize vector with specific values
        vector<int> vec2(10, 5); // vector of size 10, all elements initialized to 5

        // initialize vector with initializer list
        // vector<int> vec3(10) = {0, 1, 2}; // vector of size 10, first three elements initialized, rest to zero
        // the above line is invalid syntax
        vector<int> vec3(10); // vector of size 10, all elements initialized to zero
        vec3[0] = 0; // initialize first element to 0
        vec3[1] = 1; // initialize second element to 1
        vec3[2] = 2; // initialize third element to 2
        // remaining elements are already zero
        for (auto x : vec3)
        {
            cout << x << endl;
        }
    }
}
