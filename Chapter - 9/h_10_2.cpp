/* Week 10 Lab Exercises Question 2:

(Display non-prime numbers) Write a program that displays all 
the non-prime numbers less than 100 in decreasing order. 
Use the StackOfIntegers class to store the non-prime numbers 
(e.g., 4, 6, 8, . . .) and retrieve and display them in reverse 
order. (A positive integer which is only divisible by 1 and itself is known as a prime number.)*/

#include <bits/stdc++.h>
using namespace std;

class StackOfIntegers
{

public:
StackOfIntegers(){ size = -1;}; // initialize the size of stack is -1
bool isEmpty();
int peek();
int push(int value);
int pop();
int getSize();

private:
int elements[100];
int size;

};

// This function push the element into the stack
int StackOfIntegers::push(int value)
{
if (size >= 100 )
cout << "Stack Overflow" << endl;
else
{
size = size + 1; //size increase by 1
elements[size] = value; //insert the value at elements[size]
}
}

//This function delete the value from the top of the stack
int StackOfIntegers::pop()
{
if(size == -1)
cout << "Stack Underflow" << endl;
else
return elements[size--]; //return top value and decrease size by 1

}

// This function return the top value of the stack
int StackOfIntegers::peek()
{
   if (size < 0)
       cout << "Stack is Empty";
   else
{
       return elements[size];
   }
}

// This fuction check whether stack is empty or not
bool StackOfIntegers::isEmpty()
{
if(size < 0)
   return false;
}

//This function return the size of stack
int StackOfIntegers::getSize()
{
return size;
}

int main()
{

class StackOfIntegers s;

// check if a number is prime or not
for(int i=2 ; i<=100 ; i++)
{
int c=0;
for(int j=1 ; j<=i ; j++)
{
if(i % j == 0)
c++;
}
if(c != 2) // if number is not prime then push into stack
s.push(i);
}

//call getSize function
int size= s.getSize();

//print the values store in stack from top to bottom
cout << "Non-prime numbers from 1-100 in reverse order are : ";
for(int i=size ; i>=0 ; i--)
   cout << s.pop() << " ";
   return 0;
}
