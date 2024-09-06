#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Enter a potenital palindrome: " << endl;
    string inputString;
    getline(cin, inputString);

    string tempString = inputString;

    cout << &tempString << " " << &inputString << endl;
    cout << sizeof(string) << endl;

    reverse(inputString.begin(), inputString.end());

    if (tempString == inputString)
    {
        cout << "Word is palindrome" << endl;
    }
    else
    {
        cout << "Word is not a palindrome" << endl;
    }

    return 0;
}