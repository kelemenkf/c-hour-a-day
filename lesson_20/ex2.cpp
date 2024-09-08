#include <map>
#include <iostream>
#include <string>
using namespace std;

template<typename T>
void displayContents(const T& map)
{
    for (auto element = map.cbegin(); element != map.cend(); 
    ++element)
    {
        cout << element->first << " " << element->second;
    }

    cout << endl;
}

int main()
{
    map<int, string> dictionary;
    multimap<int, string> mdictionary;
    
    dictionary.insert(make_pair(5, "John"));
    dictionary.insert(make_pair(5, "John"));

    mdictionary.insert(make_pair(5, "John"));
    mdictionary.insert(make_pair(5, "John"));

    displayContents(dictionary);
    displayContents(mdictionary);

    return 0;
}