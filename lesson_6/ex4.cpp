#include <iostream>
using namespace std;

int main()
{
    enum Colors
    {
        Violet,
        Indigo,
        Blue,
        Green,
        Yellow,
        Orange,
        Red,
    };

    cout << "Choose a color" << endl;
    int color; 
    cin >> color;

    switch(color)
    {
    case Violet:
        cout << "Part of the rainbow colors" << endl;
        break;

    case Indigo:
        cout << "Part of the rainbow colors" << endl;
        break;

    case Blue: 
        cout << "Part of the rainbow colors" << endl;
        break;
    
    case Green: 
        cout << "Part of the rainbow colors" << endl;
        break;

    case Yellow: 
        cout << "Part of the rainbow colors" << endl;
        break;

    case Orange: 
        cout << "Part of the rainbow colors" << endl;
        break;
    
    case Red: 
        cout << "Part of the rainbow colors" << endl;
        break;  

    default:
        cout << "Not part of the rainbow" << endl;
        break;
    }

    return 0;
}