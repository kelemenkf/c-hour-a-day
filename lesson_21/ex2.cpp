#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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


template<typename T>
struct AscendingOrder
{
    bool operator() (const T& lhs, const T& rhs) const
    {
        return (lhs < rhs);
    }
};


int main()
{
    vector<string> stringVector {"Hello", "friend", "Lil", "bits"};
    vector<int> intVector {5, 6, 2, 6, 2, 6};

    sort(stringVector.begin(), stringVector.end(), AscendingOrder<string>());

    displayContents(stringVector);

    sort(intVector.begin(), intVector.end(), AscendingOrder<int>());

    displayContents(intVector);

    return 0;
}