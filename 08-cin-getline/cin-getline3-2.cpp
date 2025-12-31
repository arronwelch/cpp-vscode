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

/** \brief Sorts a vector of integers in ascending order using bubble sort algorithm
 * \param vec Reference to the vector of integers to be sorted
 * \return void
 * This function sorts the input vector in place using the bubble sort algorithm.
 * It repeatedly steps through the list, compares adjacent elements and swaps them
 * if they are in the wrong order. The process is repeated until the list is sorted.
 * The time complexity of this algorithm is O(n^2) in the average and worst cases.
 * The function does not return any value as the sorting is done in place.
 * \note This implementation is for educational purposes and is not optimized for large datasets.
 * \example
 * vector<int> vec = {5, 2, 9, 1, 5, 6};
 * bubble_sort(vec); // vec is now {1, 2, 5, 5, 6, 9}
 * \see https://en.wikipedia.org/wiki/Bubble_sort
 * \author ChatGPT
 * \date 2024-06
 * \version 1.0
 * \bug No known bugs
 * \warning This function modifies the input vector.
 * \pre The input vector must be valid and initialized.
 * \post The input vector is sorted in ascending order.
 * \par Example
 * \code
 * vector<int> vec = {5, 2, 9, 1, 5, 6};
 * bubble_sort(vec); // vec is now {1, 2, 5, 5, 6, 9}
 * \endcode
 * \ingroup SortingAlgorithms
 * \category Algorithms
 * \subcategory Sorting
 * \remarks This function is a simple implementation of the bubble sort algorithm.
 * use a swap flag to optimize the algorithm
 * \todo Implement more efficient sorting algorithms like quicksort or mergesort.
 */
void bubble_sort(vector<int> &vec)
{
    for (int i = vec.size(); i > 1; )
    {
        int m = 0; // flag to track the last swap position
        for (int j = 0; j < i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                swap(vec[j], vec[j + 1]);
                m = j + 1; // update last swap position
            }
        }
        i = m; // update i to the last swap position
    }
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