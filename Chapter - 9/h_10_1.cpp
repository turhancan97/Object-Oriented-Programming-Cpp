/* Week 10 Lab Exercises Question 1:

(Health application: the BMI class) Body Mass Index (BMI) is a measure of health that 
is based on a person’s height and weight.Use object-oriented 
programming to rewrite this procedural program. Design a class 
named BMI and draw its UML diagram. Put the class definition in the file BMI.h, its implementation 
in the file BMI.cpp,and write a test file named testBMI.cpp to test your class.*/

#include <iostream>

int BodyMassIndex(double weight, double height)
// Takes weight in kilograms and height in meters.
// Returns the value of BMI rounded to the nearest integer.
{
double bmIndex;
bmIndex = weight / (height * height);
return int(bmIndex + .5); // round to the nearest integer
}

int main()
{
const double kgInPound = 0.4536, metersInInch = 0.0254;
double weight;
double height;
int BMI;

std::cout<<"Enter your height in inches ==> ";
std::cin>>height;
std::cout<<"Enter your weight in pounds ==> ";
std::cin>>weight;

weight = weight * kgInPound;
height = height * metersInInch;
BMI = BodyMassIndex(weight, height);
std::cout << "Your BMI = " << BMI <<std::endl;

if (BMI < 18)
std::cout << "You are Underweight" <<std::endl;
else if (BMI <= 25)
std::cout << "You are Normal" <<std::endl;
else
std::cout << "You are Overweight" <<std::endl;
return 0;
}
