#include <iostream>
using namespace std;

int main()
{
    int age = 30;
    int* pointerToAge = &age;

    cout << sizeof(int) << endl;
    cout << sizeof(int*) << endl;

    int* pointToAnInt = new int;
    int* pCopy = pointToAnInt;

    cout << pointToAnInt << " " << pCopy << endl;
    
    return 0;
}