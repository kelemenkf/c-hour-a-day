#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


struct InsensitiveSort
{
    bool operator () (const string& string1, const string& string2) const
    {
        string stringCopy1;
        string stringCopy2;

        transform(string1.begin(), string1.end(), stringCopy1.begin(), ::tolower);
        transform(string2.begin(), string2.end(), stringCopy2.begin(), ::tolower);

        return (stringCopy1 < stringCopy2);
    }
};


int main()
{
    return 0;
}