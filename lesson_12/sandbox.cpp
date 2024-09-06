#include <iostream>

class Base
{
public:
    static int a;
    int b;


    static void setA(int input)
    {
        a = input;
    }

    Base(int input) : b(input) {};
};

int Base::a = 7;


int main()
{
    using std::cout, std::endl, std::cin;

    cout << "Enter number" << endl;
    int num1;
    cin >> num1;

    Base* object1 = new Base(num1);

    cout << (*object1).b << endl;

    cout << "Enter number" << endl;
    int num2;
    cin >> num2;

    Base* object2 = new Base(num2);

    cout << (*object2).b << endl;

    delete object1;
    delete object2;

    return 0;
}