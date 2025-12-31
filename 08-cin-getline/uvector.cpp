#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // using vector to store variable length array of integers
    vector<int> numbers;
    int num;

    cout << "Please enter a series of integers needing to be sorted: "
    "(enter ; to finish)" << endl;
    while(cin >> num){
        numbers.push_back(num);
    }
    cout << "The sorted series is: " << endl;
    sort(numbers.begin(), numbers.end());
    for(const auto& n : numbers){
        cout << n << " ";
    }

}