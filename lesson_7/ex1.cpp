#include <iostream>
using namespace std;

const double pi = 3.14;

double Volume(double radius);
double Volume(double radius, double height);

int main()
{   
    cout << "Enter radius: ";
    double r;
    cin >> r;

    cout << "Volume of a sphere with the given radius: " << Volume(r) << endl;

    cout << "Enter height: ";
    double h;
    cin >> h;

    cout << "Volume of a cylinder with the given radius: " << Volume(r, h) << endl;

    return 0;
}


double Volume(double radius)
{
    return 4 * radius * radius * radius * pi;
}


double Volume(double radius, double height)
{
    return pi * radius * radius * height;
}