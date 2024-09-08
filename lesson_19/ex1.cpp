#include <set>
#include <iostream>
#include <string>
using namespace std;


struct Item
{
    string word;
    string meaning;

public: 
    Item(const string& wordInput, const string& meaningInput): word(wordInput), meaning(meaningInput) {};

    bool operator == (const Item& compareTo) 
    {
        return (compareTo.word == this->word);
    }   


    bool operator < (const Item& compareTo)
    {
        return (compareTo.word < this->word);
    }
};

int main()
{
    multiset<Item> dictionary;

    return 0;
}