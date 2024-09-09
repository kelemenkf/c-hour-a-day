#include <list>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


template<typename T>
void displayContents(const T& container)
{
    for (auto element = container.cbegin(); element != container.cend(); 
    ++element)
    {
        cout << *element << " ";
    }
    cout << endl;
}


int main()
{
    vector<int> intVector {4, 6, 2, 65, 78};
    list<int> intList;

    intList.resize(intVector.size());

    displayContents(intVector);

    copy(intVector.begin(), intVector.end(), intList.begin());

    displayContents(intList);

    return 0;
}