#include <iostream>
using namespace std;

class Shape
{
public: 
    virtual double Area() = 0;
    virtual void Print() = 0;
};


class Circle: public Shape
{
private:
    double pi;
    double radius;

public:
    double getPi()
    {
        return 3.1416;
    }

    Circle(double r)
    {
        radius = r;
        pi = getPi();
    }

    double Area()
    {
        return radius * radius * pi;
    }

    void Print()
    {
        cout << "Circle" << endl;
    }
};


class Triangle : public Shape
{
private: 
    double a; 
    double b;

public:
    Triangle(double side1, double side2)
    {
        a = side1;
        b = side2;
    }

    double Area()
    {
        return a * b;
    }


    void Print()
    {
        cout << "Triangle" << endl;
    }
};


int main()
{

    Circle circle(4.56);
    Triangle triangle(3, 5);

    cout << "Area of circle: " << circle.Area() << endl;
    circle.Print();

    cout << "Area of triangle: " << triangle.Area() << endl;
    triangle.Print();

    return 0;
}