#include <iostream>
using namespace std;

void calculateAreaAndCircumference(double radius, double& area, double& circumference);

const double pi = 3.14;

int main()
{
    cout << "Enter the radius: " << endl;
    double radius;
    cin >> radius;

    double area = 0;
    double circumference = 0;
    
    calculateAreaAndCircumference(radius, area, circumference);

    cout << "Area of circle is " << area << endl;
    cout << "Circumference of circle is " << circumference << endl;

    return 0;
}


void calculateAreaAndCircumference(double radius, double& area, double& circumference)
{
    area = radius * radius * pi;
    circumference = 2 * radius * pi;
}
