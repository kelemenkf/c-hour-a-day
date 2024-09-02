#include <iostream>
using namespace std;

int main()
{
    const int ARRAY_LENGTH_1 = 4;
    const int ARRAY_LENGTH_2 = 6;

    int numArray1[ARRAY_LENGTH_1] = {3, 5, 2, 6};
    int numArray2[ARRAY_LENGTH_2] = {4, 7, 9, 2, 1, 0};


    for (int counter1 = ARRAY_LENGTH_1 - 1; counter1 >= 0; --counter1)
    {
        for (int counter2 = ARRAY_LENGTH_2 - 1; counter2 >= 0; --counter2)
        {
            cout << "numArray1[" << counter1 << "] + numArray2[" << counter2 << "]"
            << " = " << numArray1[counter1] + numArray2[counter2] << endl;  
        }
    }
    
    cout << endl;

    return 0;
}