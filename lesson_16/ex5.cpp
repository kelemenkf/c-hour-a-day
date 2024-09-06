#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string sentence = "Good day string! Today is beautiful!";

    size_t pos = sentence.find('a', 0);
    while (pos != string::npos)
    {
        cout << pos << endl;

        size_t offset = pos + 1;

        pos = sentence.find('a', offset);
    }

    return 0;
}