#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    list<int> numList { 6, 7, 3, 1 };

    auto originalElement = find(numList.begin(), numList.end(), 1);

    cout << "Pointer before insertion" << &(*originalElement) << endl;

    numList.insert(numList.end(), 10);

    auto newAddress = find(numList.begin(), numList.end(), 1);

    cout << "Pointer after insertion" << &(*newAddress) << endl;
    cout << "Original pointer after inseration" << *originalElement << endl;

    return 0;
}