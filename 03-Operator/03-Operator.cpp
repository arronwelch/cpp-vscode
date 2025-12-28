#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    // 1. Arithmetic Operators
    int a = 10;
    int b = 3;

    // Binary Operators
    cout << "a + b = " << (a + b) << endl; // Addition
    cout << "a - b = " << (a - b) << endl; // Subtraction
    cout << "a * b = " << (a * b) << endl; // Multiplication
    cout << "a / b = " << (a / b) << endl; // Division
    cout << "a % b = " << (a % b) << endl; // Modulus

    // 2. Relational Operators
    cout << boolalpha; // Print boolean values as true/false
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a > b: " << (a > b) << endl;   // Greater than
    cout << "a < b: " << (a < b) << endl;   // Less than
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal to

    // 3. Logical Operators
    bool x = true;
    bool y = false;

    cout << "x && y: " << (x && y) << endl; // Logical AND
    cout << "x || y: " << (x || y) << endl; // Logical OR
    cout << "!x: " << (!x) << endl;         // Logical NOT

    // 4. Bitwise Operators
    int c = 5; // 0101 in binary
    int d = 3; // 0011 in binary

    cout << "c & d: " << (c & d) << endl;   // Bitwise AND
    cout << "c | d: " << (c | d) << endl;   // Bitwise OR
    cout << "c ^ d: " << (c ^ d) << endl;   // Bitwise XOR

    // 5. Assignment Operators
    int e = 10;
    cout << "e = " << e << endl;

    // 6. Increment/Decrement Operators(++, --) Unary Operators
    int f = 10;
    cout << "f++: " << f++ << endl; // Post-increment
    cout << "++f: " << ++f << endl; // Pre-increment
    cout << "f--: " << f-- << endl; // Post-decrement
    cout << "--f: " << --f << endl; // Pre-decrement

    int g = f--; // Post-decrement
    cout << "g (after g = f--): " << g << endl;
    int h = --f; // Pre-decrement
    cout << "h (before h = --f): " << h << endl;

    // 8. tri-conditional Operator (?:)
    cout << "a = " << a << ", b = " << b << endl;
    cout << "(a > b ? a : b): " << (a > b ? a : b) << endl;

    // 9. Compound Assignment Operators
    // Assignment operators can be combined with other operators
    cout << "e += 5: " << (e += 5) << endl;
    cout << "e -= 5: " << (e -= 5) << endl;
    cout << "e *= 5: " << (e *= 5) << endl;
    cout << "e /= 5: " << (e /= 5) << endl;
    cout << "e %= 5: " << (e %= 5) << endl; // Modulus assignment
    cout << "e &= 5: " << (e &= 5) << endl; // Bitwise AND assignment
    cout << "e |= 5: " << (e |= 5) << endl; // Bitwise OR assignment
    cout << "e ^= 5: " << (e ^= 5) << endl; // Bitwise XOR assignment
    cout << "e <<= 2: " << (e <<= 2) << endl; // Left shift assignment
    cout << "e >>= 2: " << (e >>= 2) << endl; // Right shift assignment

    // 10. Operator overloading
    cout << "Using operator overloading:" << endl;
    cout << "<< operator is inserted operator for output stream" << endl;
    cout << "e: " << e << endl; // Using overloaded << operator for output

    // 11. Type Conversion Operators
    cout << "Type Conversion Operators:" << endl;
    cout << "int to float: " << static_cast<float>(a) << endl;
    cout << "float to int: " << static_cast<int>(static_cast<float>(a)) << endl;
    cout << "a = (int)b;: " << (a = (int)b) << endl;
    cout << "a = int(b);: " << (a = int(b)) << endl;

    // 12. Bool Type inexplicit Conversion
    cout << "Bool Type inexplicit Conversion:" << endl;

    // operator precedence
    cout << "a > b && b > c: " << (a > b && b > c) << endl;

    // operator associativity
    cout << "a + b * c: " << (a + b * c) << endl;

    return 0;
}