#include <vector>
#include <list>
#include <iostream>
using namespace std;

template<typename T>
void displayContainer(const T& container)
{
    for (auto element = container.begin(); element != container.end();
    ++ element)
    {
        cout << *element << " ";
    }
    cout << endl;
}

int main()
{   
    vector<int> numVector {4, 6, 3};
    list<int> numList {4, 7, 2, 6, 8};

    numList.insert(numList.end(), numVector.begin(), numVector.end());

    displayContainer(numList);

    return 0;
}