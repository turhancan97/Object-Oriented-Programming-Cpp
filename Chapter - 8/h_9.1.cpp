/* Week 9 Lab Exercises Question 1:

(The Fan class) Design a class named Fan to represent a fan. 
The class contains:
* An int data field named speed that specifies the speed of the fan.
A fan has three speeds indicated with a value 1, 2, or 3.
* A bool data field named on that specifies whether the fan is on.
* A double data field named radius that specifies the radius of the fan.
* A no-arg constructor that creates a default fan with speed 1, on false, and radius 5.
* The accessor and mutator functions for all the data fields.

Write a test program that creates two Fan objects. 
Assign speed 3, radius 10, and status on to the first object.
Assign speed 2, radius 5, and status off to the second object.*/

#include<iostream>
using namespace std;

class Fan
{
private:
    int speed;
    bool on;
    double radius;
public:
      
    Fan()
	{
    speed=1;
    on=false;
    radius=5;
    }
// mutator function
        void setSpeed(int sp)
		{      
        	speed=sp;
        }
// mutator function       
        void setOn(bool h)
		{         
           on=h;
        }
// mutator function        
        void setRadius(double radi)
		{
           radius=radi;
        }
// accessor function
        int getSpeed()
		{           
           return speed;
        }
// accessor function       
        bool getOn()
		{             
           return on;
        }
// accessor function        
        double getRadius()
	    {       
           return radius;
        }
};

int main(){
   Fan f1;//First object
   Fan f2;//second object
   f1.setSpeed(3);//value for the first object
   f1.setOn(true);
   f1.setRadius(10);//value for the first object
   cout<<"Fan 1 is at speed "<<f1.getSpeed()<<" with radius "<<f1.getRadius()<<" and is ";
   if(f1.getOn()){
       cout<<"ON"<<endl;
   }
   else{
       cout<<"OFF"<<endl;
   }
   f2.setSpeed(2);//value for the second object
   f2.setOn(false);
   f2.setRadius(5);//value for the second object
   cout<<"Fan 2 is at speed "<<f2.getSpeed()<<" with radius "<<f2.getRadius()<<" and is ";
   if(f2.getOn()){
       cout<<"ON"<<endl;
   }
   else{
       cout<<"OFF"<<endl;
   }
}
