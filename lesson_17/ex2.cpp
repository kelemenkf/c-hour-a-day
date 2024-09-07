#include <iostream>
#include <vector>
using namespace std;

class Jar
{
    double volume;
    double price;

public:
    Jar(double v, double p): volume(v), price(p) {};

    void displayDimensions()
    {
        cout << "Volume of the jar is " << volume << ", price of the jar is "
        << price <<  endl;
    }
};


Jar* inputJar()
{
    cout << "Enter volume; " << endl;
    double v; 
    cin >> v;

    cout << "Enter price: " << endl;
    double p;
    cin >> p;

    Jar* jar = new Jar(v, p);

    return jar;
}


int main()
{   
    vector<Jar*> jarContainer;

    char choice;

    do 
    {
        cout << "Add new jar, press j, print out jar press p" << endl;
        cin >> choice;

        if (choice == 'j')
        {
            Jar* newJar;
            newJar = inputJar();
            jarContainer.push_back(newJar);
        }   
        else if (choice == 'p')
        {
            cout << "Enter index; " << endl;
            size_t index = 0;
            cin >> index;

            if (index < jarContainer.size())
                jarContainer.at(index)->displayDimensions();
        }    

    } while (choice == 'j' || choice == 'p');

    return 0;
}