#include <iostream>
#include <vector>
using namespace std;

int stepFloor(int n);

// Exercise 3:
// Step Floor Problem
// Given a number n, find the number of ways to reach the nth step
// by taking 1 or 2 steps at a time.
// Solution:
// The number of ways to reach the nth step is the sum of the number of ways to reach the (n-1)th step and the (n-2)th step.
// This is because we can reach the nth step by taking 1 step from the (n-1)th step or 2 steps from the (n-2)th step.
int stepFloor(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    // return stepFloor(n - 1) + stepFloor(n - 2);

    // int dp[n + 1] = {0, 1, 2}; // Why array size is variable not report compiler error?
    // Above code using VLA(Variable Length Array) specified in C99, But it is standard c++ syntax
    // Some compilers may not support it
    // So use vector is more compatible
    // VLA initialization sequence value number greater than VLA size will be ignored

    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    // cout << stepFloor(4) << endl;
    for(size_t i = 0; i < 40; i++)
    {
        cout << "(" << i << ") " << stepFloor(i) << endl;
    }
    return 0;
}