/* Week 12 Lab Exercises Question 1:

(The Triangle class) Design a class named Triangle that extends GeometricObject. The class contains the following:
• Three double data fields named side1, side2, and side3 to denote the three sides of the triangle
• A no-arg constructor that creates a default triangle with each side equal to 1.0
• A constructor that creates a triangle with the specified side1, side2, and side3
• The constant accessor functions for all three data fields
• A constant function named getArea() that returns the area of this triangle
• A constant function named getPerimeter() that returns the perimeter of this triangle*/

#include <iostream>
#include <math.h>
using namespace std;

//triangle class toperform all the operation on a triangle
class Triangle
{
double side1, side2, side3; //private variable storing sides of triangle

public:
    bool filled;
    string color;
    //default constructor
    Triangle()
    {
        this->side1 = 1.0;
        this->side2 = 1.0;
        this->side3 = 1.0;
    }
    //constructor two initialize sides of tiangle with the given value
    Triangle(double one, double two, double three)
    {
        this->side1 = one;
        this->side2 = two;
        this->side3 = three;
    }
    //function to return perimiter of triangle
    double getPerimeter()
    {
        return this->side1 + this->side2 + this->side3;
    }
    //function to return area of triangle
    double getArea()
    {
        double p = getPerimeter() / 2;
        double area = p * (p - this->side1) * (p - this->side2) * (p - this->side3);
        return sqrt(area);
    }
};
int main()
{
    double a, b, c;
    int filled;
    string col = "";
    cout << "Input the length of three sides of the triangle: ";
    cin >> a >> b >> c;
    Triangle triObj(a, b, c);
    cout << "Enter wheather the triangle is filled (1) or not (0): ";
    cin >> filled;
    triObj.filled = filled;
    if (filled == 1)
    {
        cout << "Enter the colour of the triangle: ";
        cin >> col;
        triObj.color = col;
    }
    cout << "You created a " << triObj.color << " triangle of area " << triObj.getArea() << " and perimeter " << triObj.getPerimeter() << '\n';
    cout << "Was the triangle filled? ";
    if (triObj.filled)
        cout << "true\n";
    else
        cout << "false\n";
}
