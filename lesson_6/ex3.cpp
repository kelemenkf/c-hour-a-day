#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of Fibonacci numbers to calculate: " << endl;
    int numbersToCalculate;
    cin >> numbersToCalculate;

    int num1 = 0, num2 = 1;
    char wantMore = '\0';
    cout << num1 << endl << num2 << endl;

    do
    {
        for (int counter = 0; counter < numbersToCalculate; ++counter)
        {
            cout << num1 + num2 << endl;

            int num2temp = num2; 
            num2 = num1 + num2;
            num1 = num2temp;
        }

        cout << "Do you want more numbers (y/n)? " << endl;
        cin >> wantMore;

        if (wantMore == 'y')
        {
            cout << "How many more?" << endl;
            cin >> numbersToCalculate;
        }
    } while (wantMore == 'y');

    return 0;
}