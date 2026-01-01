#include <iostream>

using namespace std;

/*
 * Functions
 * A function is a block of code that performs a specific task.
 * Functions are used to organize code into reusable blocks.
 * Functions can take parameters and return values.
 *
 * Syntax of function definition:
 * return_type function_name(parameter_type1 parameter1,
 * parameter_type2 parameter2, ...) // function header
 * {
 *      // code
 *      return value;
 * }
 * Example:
 * int add(int a, int b) // function header
 * {
 *      int result = a + b; // code
 *      return result; // return value
 * }
 *
 * Syntax of function declaration (prototype):
 * return_type function_name(parameter_type1 parameter1,
 * parameter_type2 parameter2, ...);
 *
 * function declaration is used to inform the compiler about the function
 * before its actual definition.
 * This is useful when the function is defined after its first use.
 * It can be placed at the beginning of the file or in a header file.
 * It parameters_name are optional in the declaration.
 * Example:
 * int add(int, int); // function declaration
 * or
 * int add(int a, int b); // function declaration
 * or // parameters_name can be other names
 * int add(int x, int y); // function declaration
 */

// int add(int, int); // function declaration
int add(int x, int y); // function declaration with different parameter names(optional)
// Interface of the function
// Prototype tells the compiler about the function name, return type, and parameter_types

int main()
{
    int a = 10, b = 20;
    int sum = add(a, b); // function call
    cout << "Sum: " << sum << endl;
    return 0;

}

int add(int a, int b)
{
    // int a and int b are parameters(also called formal parameters)
    // a and b are local variables
    // copy of actual parameters(also called actual arguments)
    // are passed to the function
    // cannot access variables outside the function
    // can use reference or pointer to avoid copying large data
    int result = a + b;
    return result;
}