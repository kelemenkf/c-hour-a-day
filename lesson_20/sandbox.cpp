#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef map<int, string> MAP_IS;

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
    MAP_IS mapObject;

    mapObject.insert(make_pair(20, "twenty"));

    displayContents(mapObject);
    
    return 0;
}