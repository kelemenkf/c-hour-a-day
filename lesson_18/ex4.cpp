#include <list>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    list<string> stringList {"Hello", "It's all good man", "Coushatta"};

    stringList.sort();
    stringList.reverse();

    for (auto element = stringList.begin(); element != stringList.end(); 
    ++element)
    {
        cout << *element << " ";
    }
    cout << endl;

    return 0;
}