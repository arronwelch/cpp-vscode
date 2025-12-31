#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Enter a serial of integers with space delimiter or newline delimiter
    // terminate the input with EOF(Ctrl+Z in Windows, Ctrl+D in Linux)
    cout << "Enter a serial of integers (terminate with EOF[Ctrl+Z + Enter in Windows, Ctrl+D in Linux]): " << endl;
    // And output the sorted integers sequence
    vector<int> v;
    while (cin ) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    for (auto i : v) {
        cout << i << endl;
    }

}