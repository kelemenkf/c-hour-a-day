#include <iostream>
using namespace std;

class Person
{
public: 
    int age;
    bool isFemale;


public: 
    bool operator < (const Person& person) const
    {   
        if (this->age < person.age)
        {
            return true;
        }
        else if (this->age > person.age && this->isFemale == true && person.isFemale == false)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};


int main()
{
    return 0;
}