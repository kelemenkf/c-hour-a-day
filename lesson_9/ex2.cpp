#include <iostream>
using namespace std;

class Circle
{
    const double pi = 3.14;
    double radius;

public: 
    double area;
    double circumference;

    Circle(double radius) : radius(radius), pi(3.1416) {}


    void calculateArea()
    {
        area =  radius * radius * pi;
    }

    
    void calcualteCircumference()
    {
        circumference =  2 * radius * pi;
    }
};


int main()
{
    cout << "Enter a radius: " << endl;
    double radius;
    cin >> radius;

    Circle circle(radius);
    circle.calcualteCircumference();
    circle.calculateArea();

    cout << "Area of the circle is " << circle.area << " and circumference of the circle is "
    << circle.circumference << endl;

    return 0;
}