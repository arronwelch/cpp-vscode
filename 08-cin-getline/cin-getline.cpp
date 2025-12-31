#include <iostream>
using namespace std;

int main()
{
    // using cin.getline to read a full line of text including spaces
    const int MAX_LENGTH = 255;
    char sentence[MAX_LENGTH];
    cout << "Enter a sentence: ";
    cin.getline(sentence, MAX_LENGTH);
    cout << "You entered: " << sentence << endl;
}