#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    cout << "Enter a string: " << endl;
    string inputString;
    getline(cin, inputString);

    size_t length = inputString.length();

    for (int counter = 1; counter < length - 1; counter += 2)
    {
        inputString[counter] = toupper(inputString[counter]);
    }

    for (int counter = 0; counter <= length - 1; counter += 2)
    {
        inputString[counter] = tolower(inputString[counter]);
    }

    cout << inputString << endl;

    return 0;
}
