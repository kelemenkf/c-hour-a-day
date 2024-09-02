#include <iostream>
using namespace std;

int main()
{
    unsigned int a = 10;
    int b = 10;
    long c = 10;
    
    cout << "Size of unsigned: " << sizeof(a) << endl;
    cout << "Size of signed: " << sizeof(b) << endl;
    cout << "Size of long: " << sizeof(c) << endl;
    
    return 0;
}