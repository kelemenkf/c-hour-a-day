#include <stack>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter a string: " << endl;
    string input;
    getline(cin, input);


    stack<char> stringStack;
    for (auto element = input.cbegin(); element != input.cend(); 
    ++element)
    {
        stringStack.push(*element);
    }


    while (!stringStack.empty())
    {
       cout << stringStack.top() << " "; 
       stringStack.pop();
    }
    cout << endl;

    return 0;
}