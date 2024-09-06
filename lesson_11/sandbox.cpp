#include <iostream>
using namespace std;

class Fish 
{
public: 
    Fish()
    {
        cout << "Constructed Fish" << endl;
    }


    ~Fish()
    {
        cout << "Destroyed Fish" << endl;
    }


    virtual void Swim()
    {
        cout << "Fish swims!" << endl;
    }
};


class Tuna:public Fish
{
public: 
    Tuna()
    {
        cout << "Constructed Tuna" << endl;
    }


    ~Tuna()
    {
        cout << "Destroyed Tuna" << endl;
    }


    void Swim()
    {
        cout << "Tuna swims!" << endl;
    }
};


class Carp:public Fish
{
public: 
    Carp()
    {
        cout << "Constructed Carp" << endl;
    }


    ~Carp()
    {
        cout << "Destroyed Carp" << endl;
    }


    void Swim()
    {
        cout << "Carp swims!" << endl;
    }
};


void MakeFishSwim(Fish& inputFish)
{
    inputFish.Swim();
}


void DeleteFish(Fish* pFish)
{
    delete pFish;
}


int main()
{
    Tuna myDinner;
    Carp myLunch;

    MakeFishSwim(myDinner);

    MakeFishSwim(myLunch);

    return 0;
}