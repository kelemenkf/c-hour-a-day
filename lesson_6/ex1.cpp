#include <iostream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    int numArray[ARRAY_SIZE] = {4, 5, 2, 5, 2, 9, 6, 5, 3, 1};

    cout << "The array in reverse order is: " << endl;
    for (int counter = ARRAY_SIZE - 1; counter >= 0; --counter)
    {
        cout << numArray[counter];
    } 
    cout << endl;   

    return 0;
}