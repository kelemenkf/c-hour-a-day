#include <iostream>
#include <deque>
using namespace std;

template<class T>
void DisplayContents(const T& inputDeque)
{
    for (auto iterator = inputDeque.begin(); iterator != inputDeque.end(); ++iterator)
    {
        size_t index = distance(inputDeque.begin(), iterator);
        cout << inputDeque[index] << endl;
    }
}

int main()
{
    deque container { "Hello", "Conatiners are cool!", "C++ is evolving!" };

    DisplayContents(container);

    return 0;
}