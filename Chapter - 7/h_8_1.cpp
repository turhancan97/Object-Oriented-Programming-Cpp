/* Week 8 Lab Exercises Question 1:

(Find the index of the largest element) Write a function that 
returns the index of the largest element in an array of numbers.
If the largest element occurs more than once in the array,
return the largest index. Using the following header:

int indexOfLargestElement(double array[], int size)

Write a test program that prompts the user to enter 10 numbers,
invokes this function to return the index of the largest
element, and displays that index.*/

#include <iostream>
using namespace std;

int indexOfLargestElement(double array[], int size);

int main(){
    double array[10];
    int i;
    cout<<"Enter a list of 10 mumbers: "<<endl;
    for(i=0;i<10;i++)
    {
        cin>>array[i];
    }
    cout<<"The largest element has index: "<<indexOfLargestElement(array,10);
    return 0;
}

// Function for finding largest element's index
int indexOfLargestElement(double array[], int size)
{
    int i,temp;
    float largest;
    largest = array[0];
    for(i=1;i<size;i++)
    {
        if(array[i] >= largest)
        {
            largest=array[i];
            temp=i;
        }
    }
    return temp;
}
