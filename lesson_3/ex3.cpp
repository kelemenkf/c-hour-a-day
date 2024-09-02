#include <iostream>
using namespace std;

consteval double getPi() { return 22.0/7; };


void CalculateCircleParameters(double radius)
{
    double area { getPi() * radius * radius };
    cout << "Area of circle = " << area << endl;

    double circumference { getPi() * radius * 2 };
    cout << "Circumeference of circle = " << circumference << endl;
}


int main()
{
    cout << "Enter radius: " << endl;
    double radius;
    cin >> radius;

    CalculateCircleParameters(radius);

    return 0;
}