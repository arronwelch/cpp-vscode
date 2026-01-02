#include <iostream>

using namespace std;

// overload function
// it is a function with same name but different parameters
// it is used to perform different task based on different parameters
// same name, same parameters, but different return type is not a overload function

float multiply(float a, float b)
{
    return a * b;
}

// Error overload function(same name, same parameters, but different return type)
// Because compiler only checks the name and parameters(type and number) to Identify the function
// Not check the return type
// Such as
// "int multiply(float a, float b);"
// is Error, because this function is same as "float multiply(float a, float b);" to compiler

// same name, different parameters but with default values cannot be overload
// Such as
// "float multiply(float a, float b, float c = 0.0f);"
// "float multiply(float a, float b);"
// Above two functions cannot be overload, Because the first function has default value for parameter c.
// Compiler cannot decide which function to call.

float multiply(float a, float b, float c)
{
    return a * b * c;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int m = 2, n = 5;
    float x = 3.5, y = -5.7, z = 4.1;

    cout << multiply(m, n) << endl;
    cout << multiply(x, y) << endl;
    cout << multiply(x, y, z) << endl;
}