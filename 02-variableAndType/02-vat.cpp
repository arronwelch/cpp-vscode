#include <iostream>

using namespace std;

int main(void)
{

    // 1. Identifiers
    // Identifiers are names used to identify variables, functions, arrays, etc.
    // Rules for naming identifiers:
    // - Must begin with a letter (A-Z, a-z) or an underscore (_)
    // - Can contain letters, numbers, and underscores
    // - Cannot contain spaces
    // - Cannot be a reserved word (e.g., int, float, char, etc.)

    // int a = 0;
    // int b = 1;
    // int sum = a + b;
    // cout << "a + b = " << sum << endl;

    // 2. Keywords
    // Keywords are reserved words that have special meaning in C++.
    // Examples of keywords: int, float, return, if, else, while, for, etc.
    // They cannot be used as identifiers.

    float a = 0.0f;
    float b(-2.1f);
    float c{};
    float d={};
    float e[] = {1.0f, 2.0f, 4.0f, 8.0f};
    int hexn1 = 0x1a;
    int octn2 = 032;
    int binn3 = 0b11010;
    int decn4 = 42;

    const char* message = "Hello, World!";
    char hello1[] = "Hello, World!";
    char hello2[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    string hello3 = "Hello, World!";

    // 3. Case Sensitivity
    // C++ is case-sensitive, meaning that uppercase and lowercase letters are considered different.
    // int a = 0;
    // int A = 1;

    // 4. definition and initialization
    int number;           // definition of variable 'number'
    number = 10;         // initialization of variable 'number' with value 10
    cout << "number = " << number << endl;
    // 5. declaration
    int number1;          // declaration of variable 'number1'
    number1 = 20;         // initialization of variable 'number1' with value 20

    // 6. scope
    int number2 = 30;
    {
        int number3 = 40; // number3 is only accessible within this block
        cout << "number3 = " << number3 << endl;
    }

    // 7. Sizeof operator
    cout << "sizeof(unsigned char) = " << sizeof(unsigned char) << endl;
    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(short) = " << sizeof(short) << endl;
    cout << "sizeof(unsigned short) = " << sizeof(unsigned short) << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(unsigned int) = " << sizeof(unsigned int) << endl;
    cout << "sizeof(long) = " << sizeof(long) << endl;
    cout << "sizeof(unsigned long) = " << sizeof(unsigned long) << endl;
    cout << "sizeof(long long) = " << sizeof(long long) << endl;
    cout << "sizeof(unsigned long long) = " << sizeof(unsigned long long) << endl;
    cout << "sizeof(float) = " << sizeof(float) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;
    cout << "sizeof(long double) = " << sizeof(long double) << endl;
    cout << "sizeof(bool) = " << sizeof(bool) << endl;

    // 8. Constants
    // 8.1. Literal Constants
    const int constantValue = 100;

    int decnn1 = 26;
    int hexnn2 = 0x1a; // 0x1A C++ hexadecimal literal not case-sensitive
    int octnn3 = 032;
    int binnn4 = 0b11010; // C++ binary literal not all compilers support binary literals

    float nn1 = 2.6;
    float nn2 = 2.6f; // 'f' or 'F' suffix indicates a float literal
    float nn3 = 2.6F;
    float nn4 = 0.026e2;
    float nn5 = 26e-1;
    float nn6 = .26E1f;

    char char1 = 'a';
    char char2 = 97; // ASCII value of 'a' is 97
    char char3 = '\x61'; // Hexadecimal representation of 'a'
    char char4 = '\u0061'; // Unicode representation of 'a'
    char char5 = '\u{61}'; // Unicode representation of 'a'
    char char6 = '\u{00000061}'; // Unicode representation of 'a'
    char char7 = '\141'; // Octal representation of 'a'

    cout << "char1 = " << char1 << endl;
    cout << "char2 = " << char2 << endl;
    cout << "char3 = " << char3 << endl;
    cout << "char4 = " << char4 << endl;
    cout << "char5 = " << char5 << endl;
    cout << "char6 = " << char6 << endl;
    cout << "char7 = " << char7 << endl;

    #define PI 3.14159
    const double pi = 3.14159;

    return 0;
}