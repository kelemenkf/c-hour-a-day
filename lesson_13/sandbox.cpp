#include <iostream>
using namespace std;

class Base
{
protected:
    int number;

public: 
    Base(int inputNumber): number(inputNumber) {}

    virtual int returnNumber()
    {
        return number;
    }

    virtual ~Base()
    {

    }
};


class Derived: public Base
{
public: 
    Derived(int inputNumber): Base(inputNumber) {}

    int returnNumber() override
    {
        return number + 5;
    }


    void onlyDerived()
    {
        cout << "Derived function fuck yeah" << endl;
    }
};


int main()
{
    int a;
    cin >> a;

    Base* pBase = new Derived(a);

    Base* pBase2 = new Base(a);

    cout << "pBase " << pBase->returnNumber() << endl;

    cout << "pBase2 " << pBase2->returnNumber() << endl;

    Derived* pDerived = static_cast<Derived*>(pBase);

    pDerived->onlyDerived();

    delete pBase;
    delete pBase2;

    return 0;
}