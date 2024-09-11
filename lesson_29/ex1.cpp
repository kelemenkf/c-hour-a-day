#include <concepts>
#include <ranges>
#include <iostream>
#include <vector>
using namespace std;


template<ranges::view T>
void displayView(T& view)
{
    for (auto element: view)
    {
        cout << element << " ";
    }
    cout << endl;
}


int main()
{
    vector<int> nums {4, 3, 6, 2, 6, 1, 67, 23};

    auto lambdaSquare = [](int num){ return  (num * num); };
    auto numsView = nums | views::transform(lambdaSquare) | \
    views::reverse | views::take(3);

    displayView(numsView);

    return 0;
}