#include <iostream>

using namespace std;

// inline function
// it is used to reduce the function call overhead
// improve program performance
// inline function is not recommended for large functions
// usage of inline function
// inline function is used when function is called many times
// syntax : inline return_type function_name(arguments) in function definition
// not in function declaration
// inline function will be expanded at compile time
// and consumpes more memory space
// bellow function context is not inline:
// 1. function has many control flow, like loops, switch case etc.
// 2. function has static variables.
// 3. function is recursive function.
//

// inline float multiply(float a, float b);
float multiply(float a, float b);

inline float multiply(float a, float b)
{
    return a * b;
}

int main()
{
    cout << multiply(2.5, 3.5) << endl;
}