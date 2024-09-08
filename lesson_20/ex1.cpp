#include <map>
#include <iostream>
#include <string>
using namespace std;

struct WordProperty
{
    string word;
    bool isLatinBase;
};


struct fPredicate
{
    bool operator () (const WordProperty& word1, const WordProperty& word2) const
    {
        return (word1.word < word2.word);
    }
};


int main()
{
    return 0;
}