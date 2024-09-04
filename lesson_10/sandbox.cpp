#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
    int data1;
    double data2;
};

int main()
{
    cout << "Size of int " << sizeof(int) << endl;
    cout << "Size of double " << sizeof(double) << endl;
    cout << "Size of Base class " << sizeof(Base) << endl;
    cout << "Size of string " << sizeof(string) << endl;

    return 0;
}