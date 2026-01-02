#include <iostream>
using namespace std;

// Exercise 2:
// User enter a positive integer.
// Program will check if the number is reverse of itself.
// For example: 12321 is a palindrome.

bool isPalindrome(int n)
{
    int rev = 0, rem;
    int m = n;

    if (n < 0)
        return false;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    return (m == rev);
}

int main()
{
    // int n;
    // cout << "Enter a positive integer: ";
    // cin >> n;

    int a[] = {121, 12321, 123456, 123321, 123456789, 1234567899, -101, 0, 1};

    for (const int &n : a)
    {

        if (isPalindrome(n))
        {
            cout << n << " is a palindrome." << endl;
        }
        else
        {
            cout << n << " is not a palindrome." << endl;
        }
    }
    return 0;
}