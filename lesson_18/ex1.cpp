#include <list>
#include <iostream>
using namespace std;


void InsertElement(list<int>& numbers)
{
    cout << "Enter a number" << endl;
    int num;
    cin >> num;

    numbers.push_back(num);
}


char ChooseOption()
{
    cout << "Would you like to continue? (y/n)" << endl;
    char choice;
    cin >> choice;

    return choice;
}


template<typename T>
void displayList(const list<T>& container) 
{
    for (auto element = container.begin(); element != container.end();  
    ++element)
    {
        cout << *element << " ";
    }

    cout << endl;
}


int main()
{
    list<int> numList;

    cout << "Enter a number: " << endl;
    int num;
    cin >> num;

    numList.push_back(num);

    char choice;

    do
    {
        InsertElement(numList);

        choice = ChooseOption();
    } while (choice == 'y');

    if (choice == 'n')
    {
        displayList(numList);
    }

    return 0;
}