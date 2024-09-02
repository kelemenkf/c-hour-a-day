#include <iostream>
using namespace std;

int main()
{
    unsigned short int a = 6;
    unsigned int b = 6;
    unsigned long c = 6;
    unsigned long long d = 6;

    cout << "Size of different types: " << sizeof(a) << ", " << sizeof(b) << ", "
    << sizeof(c) << ", " << sizeof(d) << endl;

    return 0;
}