#include <iostream>
using namespace std;

int main() {
    int Seconds;

    cout << "Enter the number of seconds: ";
    cin >> Seconds;
    int Hours = Seconds / 3600;
    int Minutes = (Seconds % 3600) / 60;
    int SecondsRemaining = (Seconds % 3600) % 60;
    cout << "Hours: " << Hours << endl;
    cout << "Minutes: " << Minutes << endl;
    cout << "Seconds: " << SecondsRemaining << endl;

    return 0;
}