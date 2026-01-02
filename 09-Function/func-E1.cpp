#include <iostream>
using namespace std;

// Exercise 1:
// User input two numbers
// program a function to swap the two numbers
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

void swap_XOR(int &a, int &b) {
    a = a ^ b;
    b = a ^ b; // (a ^ b) ^ b = a
    a = a ^ b; // (a ^ b) ^ a = b
}

int main() {
    int a = 1, b = 2;
    float c = 3.4, d = 5.6;
    // cout << "Enter two interger numbers: ";
    // cin >> a >> b;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    cout << "Before swap: c = " << c << ", d = " << d << endl;
    swap(c, d);
    cout << "After swap: c = " << c << ", d = " << d << endl;

    return 0;
}