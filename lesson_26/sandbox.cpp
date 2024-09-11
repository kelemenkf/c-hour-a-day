#include <iostream>
#include <memory>
using namespace std;


class Fish
{
protected:
    int age;

public: 
    Fish() {};

    Fish(int inputAge) : age(inputAge) {};

    virtual void swim() const
    {
        cout << "Fish swims" << endl;
    }
};



class Tuna: public Fish
{
public: 
    Tuna() {}; 

    void swim() const override
    {
        cout << "Tuna swims" << endl;
    }
};


void displayFish(const unique_ptr<Fish>& fish)
{
    (*fish).swim();
}


int main()
{
    Fish* newFish = new Fish(30);
    Tuna* newTuna = new Tuna;

    Tuna john;

    unique_ptr<Fish> jack(new Tuna);

    displayFish(jack);

    return 0;
}