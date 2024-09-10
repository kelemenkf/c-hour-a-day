#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const double Pi = (double) 22.0 / 7;

    cout << "Enter an integer: " << endl;
    int input;
    cin >> input;

    cout << hex << input << endl;
    cout << oct << input << endl;

    cout << scientific << Pi << endl;

    cout << setw(30) << setfill('*') << "align that shit" << endl;


    char charBuf[10];
    cin.get(charBuf, 10);

    cout << charBuf << endl;

    return 0;
}