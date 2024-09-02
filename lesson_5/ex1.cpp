#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Boolean 1: " << endl;
    bool first;
    cin >> first;

    cout << "Enter Boolean 2: " << endl;
    bool second;
    cin >> second;

    cout << "Bitwise and: " << (first & second) << endl;
    cout << "Bitwise or: " << (first | second) << endl;
    cout << "Bitwise xor: " << (first ^ second) << endl;

    return 0;
}