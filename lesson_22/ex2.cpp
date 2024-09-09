#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> intVector {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Enter a value to add to each element in the container: " << endl;
    int valueToAdd;
    cin >> valueToAdd;

    for_each(intVector.cbegin(), intVector.cend(), 
    [](const int& element) { cout << element << " "; });

    cout << endl;

    for_each(intVector.begin(), intVector.end(), 
    [valueToAdd](int& elem) { elem += valueToAdd; });

    for_each(intVector.cbegin(), intVector.cend(), 
    [](const int& element) { cout << element << " "; });

    cout << endl;

    return 0;
}