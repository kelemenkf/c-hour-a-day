#include <iostream>
using namespace std;


void Display()
{
    
}

template<typename T, typename ...Rest>
void Display(T arg1, Rest... argN)
{
    // for (unsigned int counter = 0; counter < sizeof...(Rest), ++counter)
    // {
    //     cout << 
    // } 

    cout << arg1 << endl;
    Display(argN...);
}

int main()
{
    Display(4, 3, 5, 2, 5, 2);

    return 0;
}