#include <iostream>

using namespace std;

int main()
{
    // Enter a sentence and count the number of alphabets(no case sensitive)
    const int MAX_LENGTH = 255;
    char sentence[MAX_LENGTH];
    int count[26] = {0};
    cout << "Enter a sentence: ";
    cin.getline(sentence, MAX_LENGTH);
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            count[sentence[i] - 'a']++;
        }
        else if (sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            count[sentence[i] - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            cout << char('a' + i) << "("<< char('A' + i) << ")" << ": " << count[i] << endl;
        }
    }

}