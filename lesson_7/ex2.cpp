#include <iostream>
using namespace std;

void acceptArray(double numArray[], int& length);

int main()
{
    double dArray[] = {3.5, 3.6, 9.953};
    int length = 3;

    acceptArray(dArray, length);

    return 0;
}

void acceptArray(double numArray[], int& length)
{
    for (int counter = 0; counter < length; ++counter)
        cout << numArray[counter] << " ";
    cout << endl;
}

