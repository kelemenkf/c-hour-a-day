#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> intVector {4, 3, 5, 67};
    vector<string> stringVector {"Eat", "some", "fucking", "shit", "you", "stupid"
    , "fucking", "bitch"};

    for_each(intVector.cbegin(), intVector.cend(), []<typename T> (const T& value) { cout << value << " "; });
    cout << endl;
    for_each(stringVector.cbegin(), stringVector.cend(),[]<typename T> (const T& value) { cout << value << " "; });
    cout << endl;

    sort(intVector.begin(), intVector.end(), []<typename T> (const T& lhs, const T& rhs) -> bool { return (lhs > rhs); });
    sort(stringVector.begin(), stringVector.end(), []<typename T> (const T& lhs, const T& rhs) -> bool { return (lhs > rhs); });

    for_each(intVector.cbegin(), intVector.cend(), []<typename T> (const T& value) { cout << value << " "; });
    cout << endl;
    for_each(stringVector.cbegin(), stringVector.cend(),[]<typename T> (const T& value) { cout << value << " "; });
    cout << endl;

    return 0;
}