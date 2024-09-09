#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int main()
{
    cout << sizeof(bool) << endl;

    bitset<1> bit;

    cout << sizeof(bitset<1>) << endl;


    vector<bool> bit_vector(10, true);

    cout << sizeof(bit_vector) << endl;
    
   return 0;
}