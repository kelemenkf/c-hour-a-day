#include <set>
#include <iostream>
using namespace std;

template<typename T>
void displayContents(const T& container)
{
    for (auto element = container.begin(); element != container.end(); 
    ++element)
    {
        cout << *element << " ";
    }
    cout << endl;
}

int main()
{
    set<int> numSet;
    multiset<int> numMultiset;

    numMultiset.insert(5);
    numMultiset.insert(5);
    numSet.insert(5);
    numSet.insert(5);

    displayContents(numMultiset);
    displayContents(numSet);

    return 0;
}