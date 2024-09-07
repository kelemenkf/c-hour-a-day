#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> intArray;

    cout << "Enter an integer: " << endl;
    int a; 
    cin >> a;

    intArray.push_back(a);

    while (true)
    {
        cout << "Enter an integer (n) or an index(i): " << endl;
        char choice; 
        cin >> choice;
        if (choice == 'n')
        {
            cout << "Enter number :" << endl;
            int b;
            cin >> b;
            intArray.push_back(b);
        }
        else if (choice == 'i')
        {
            cout << "Enter index: " << endl;
            size_t index;
            cin >> index;

            if (index < intArray.size())
            {
                cout << intArray[index] << endl;
            }   
            else 
            {
                cout << "Index out of bounds" << endl;
            }         
        }
        else 
        {
            break;
        }
    }
    return 0;
}