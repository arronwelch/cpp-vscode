#include <iostream>

using namespace std;

// Function to count words in a C-style string
int countWords(const char* str) {
    int count = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; ++i) {
        if ( str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] == '-') {
            if (!inWord) {
                inWord = true;
                count++;
            }
        } else {
            inWord = false;
        }
    }

    return count;
}

int main() {

    // Enter a sentence and count the number of words in it
    const int MAX_LENGTH = 255;
    char sentence[MAX_LENGTH];
    cout << "Enter a sentence: ";
    cin.getline(sentence, MAX_LENGTH);
    cout << "Number of words: " << countWords(sentence) << endl;

}