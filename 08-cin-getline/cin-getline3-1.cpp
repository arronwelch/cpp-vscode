#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int> &vec)
{
    for (const auto &i : vec) // const reference to avoid copying
        cout << i << " ";
    cout << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void bubble_sort(vector<int> &vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
        for (int j = 0; j < vec.size() - i - 1; j++)
            if (vec[j] > vec[j + 1])
                swap(vec[j], vec[j + 1]);
}

int main()
{
    // Enter a serials of integers with space delimiter or newline delimiter
    // And terminate the input with EOF(Ctrl+Z + Enter on Windows, Ctrl+D on Linux)
    // The program will output the number of integers and the integers themselves
    // And the program will output the sorted integers sequence
    cout << "Enter a serial of integers (terminate with EOF[Ctrl+Z + Enter on Windows, Ctrl+D on Linux]): " << endl;
    vector<int> vec;
    int i;
    while (cin >> i)
        vec.push_back(i);
    cout << "You entered " << vec.size() << " integers." << endl;
    printVector(vec);

    bubble_sort(vec);

    cout << "Sorted integers:" << endl;
    printVector(vec);
}

/* Sample Input/Output:
 *
 * > Enter a serial of integers (terminate with EOF[Ctrl+Z + Enter on Windows, Ctrl+D on Linux]):
 * > 1 -2 45 18475 -2478 0 ^D
 * > You entered 6 integers.
 * > 1 -2 45 18475 -2478 0
 * > Sorted integers:
 * > -2478 -2 0 1 45 18475
 */