#include <iostream>

using namespace std;

// Fibnacci series
// A0 = 1
// A1 = 1
// A2 = A1 + A0
// A3 = A2 + A1
// ...
// A(i) = A(i-1) + A(i-2)
// When n > 40, the function running time is too long
// O(2^n)
//                                  fib(5)
//                       /                               \
//                  fib(4)            +                  fib(3)
//                  /           \                       /     \
//           fib(3)     +       fib(2)      +       fib(2) + fib(1)
//           /    \           /     \               /   \
//      fib(2) + fib(1) + fib(1) + fib(0)   +   fib(1) + fib(0)
//      /   \
//  fib(1) + fib(0)

int fib(int n) {
    // cout << "fib(" << n << ")" << endl;
    if (n <= 1) {
        cout << endl;
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

// cache Fibnacci series to avoid redundant calculation
int fib_cache(int n) {
    const int cache_size = 50;
    static int cache[cache_size] = {0};

    if (n >= cache_size) {
        cout << "n = " << n << " is too large(n must small than 49)!" << endl;
        return -1;
    }
    // cout << "fib_cache(" << n << ")" << endl;

    if (n <= 1) {
        // cout << "\n";
        return 1;
    }
    if (cache[n] != 0) {
        return cache[n];
    }
    cache[n] = fib_cache(n - 1) + fib_cache(n - 2);
    return cache[n];
}

// Dynamic programming
// O(n)
int fib_dp(int n)
{
    static int count = 0;
    if(n <= 1){
        return 1;
    }
    int a = 1, b = 1, c = 0;
    for(int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;

        count++;
        cout << "count = " << count << endl;
    }
    return c;
}

int main() {
    cout << "Fib(5) = " << fib(5) << endl;
    cout << "Fib_cache(5) = " << fib_cache(5) << endl;
    cout << "Fib_dp(5) = " << fib_dp(5) << endl;
}