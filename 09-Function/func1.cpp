#include <iostream>

using namespace std;

// function prototype with default parameter values
// if function prototype has default parameter values
// then function definition should not have default parameter values again
// or default parameter values should be provided only in the function prototype
int demoFunc(int , int , int  = 0, int  = 0);

// Function to demonstrate pass by value
// vulue is a copy of the actual argument
// Changes made to vulue inside the function do not affect a in main
int inc(int vulue)
{
    ++vulue;
    return vulue;
}

// Function to demonstrate pass by reference
// a is a reference to the actual argument
// Changes made to a inside the function affect a in main
// Note: The & sign before the parameter name in the function declaration is used to pass a reference.
// Note: The & sign before a in the function call is used to pass the address of a to the function.
int inc_reference(int &vulue)
{
    ++vulue;
    return vulue; // return value common using for functions running state code
}

int main()
{
    int a = 3;
    int result = 0;
    result = inc(a); // function call by value
    cout << "a = " << a << endl;
    cout << "result = " << result << endl;

    result = inc_reference(a); // function call by reference usage same as pass by value
    cout << "a = " << a << endl;
    cout << "result = " << result << endl;

    // in c++ functions can return only one return value
    // but we can use reference parameters to return multiple values
    // use return value to return function running is success or failed state

    result = 0;
    result = demoFunc(7, 6); // using default parameter values for c and d
    cout << "result = " << result << endl;
    result = demoFunc(7, 6, 1); // using default parameter values for d
    cout << "result = " << result << endl;
    result = demoFunc(7, 6, 1, 5); // using all parameter values
    cout << "result = " << result << endl;

    return 0;
}

// no retrun value function
void multiply(float a, float b)
{
    cout << "a * b = " << (a * b) << endl;
}

// no parameter function
void hello()
{
    cout << "hello" << endl;
}

void Hello(void)
{
    cout << "Hello" << endl;
}

// have default parameter values
// function definition cannot have default parameter values again
// because they are already defined in the prototype
int demoFunc(int a, int b, int c, int d)
{
    int result = a*b + c - d;
    return result;
}