#include <iostream>
#include <map>
#include <string>

using namespace std;

void count(const char *str)
{
    // new map to store word counts
    map<string, int> wordCounts;
    string word;
    bool inWord = false;
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if( (str[i] >= 'a' && str[i] <= 'z')
            || (str[i] >= 'A' && str[i] <= 'Z')
            || str[i] == '-' )
        {
            word += str[i];
            if(!inWord)
            {
                inWord = true;
                count++;
            }
        }
        else
        {
            if(inWord)
            {
                inWord = false;
                if(wordCounts.find(word) == wordCounts.end())
                {
                    wordCounts[word] = 1;
                }
                else
                {
                    wordCounts[word]++;
                }
            }
            word.clear();
            count = 0;
        }
    }

    if(inWord)
    {
        inWord = false;
        if(wordCounts.find(word) == wordCounts.end())
        {
            wordCounts[word] = 1;
        }
        else
        {
            wordCounts[word]++;
        }
    }

    for(map<string, int>::iterator it = wordCounts.begin(); it != wordCounts.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }
}

int main()
{
    // Enter a sentence and count the number of each words
    const int MAX_LENGTH = 255;
    char sentence[MAX_LENGTH];
    cout << "Enter a sentence: ";
    cin.getline(sentence, MAX_LENGTH);
    count(sentence);

}