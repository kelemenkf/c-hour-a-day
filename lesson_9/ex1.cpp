#include <iostream>
#include <string>
using namespace std;

class Human
{
    int age;
    string name;

public: 

    Human(int ageInput, string nameInput) : age(ageInput), name(nameInput) 
    {
        cout << "Human initalized" << endl;
    }
};

int main()
{

    Human firstMan(33, "Jesus");

    return 0;
}