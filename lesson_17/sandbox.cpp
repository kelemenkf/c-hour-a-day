#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
    std::vector<int>::iterator element;

    std::vector<int> intArray{ 4, 56, 89 };

    std::string string = "Happy birthday";

    std::cout << string.length() << std::endl;

    std::cout << intArray.size() << " " << intArray.capacity() << std::endl;

    intArray.push_back(59);

    std::cout << intArray.size() << " " << intArray.capacity() << std::endl;
    
    return 0;
}