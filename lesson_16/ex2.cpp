#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a sentence" << endl;

    string sentence;
    getline(cin, sentence);

    string vowels("aeiouAEIOU");

    int counter;
    for (char vowel: vowels)
    {
        for (char letter: sentence)
        {
            if (letter == vowel)
            {
                counter += 1;
            }
        }
    }

    cout << "The number of vowels is equal to " << counter << endl;

    return 0;
}