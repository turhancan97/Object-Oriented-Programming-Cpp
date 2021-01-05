/* Week 8 Lab Exercises Question 2:

(Strictly identical arrays) Two arrays list1 and list2 are 
strictly identical if they have the same length and list1[i] 
is equal to list2[i] for each i. Write a function that 
returns true if list1 and list2 are strictly identical 
using the following header:

bool strictlyEqual(const int list1[], const int list2[], int size)

Write a test program that prompts the user to enter two lists 
of integers and tells the user whether the two are strictly 
identical or not. The sample runs follow. Note that the first 
number in the input indicates the number of the elements in 
the list. This number is not part of the list. Assume the 
maximum list size is 20.*/

#include <iostream>
using namespace std;

bool strictlyEqual(int const list1[], int const list2[], int size)
{
bool identical=true;
for (int i =1; i<=size; i++)
{
	if (list1[i] != list2[i])
    {
        identical=false;
        break;
    }
} 
return identical;
}

int main () 
{
    bool identical;
    cout<<"Enter two lists of integers, each preceded by the number of elements in the list (max 20):"<<endl;
    cout << "Enter list 1: ";
    int list1[20], i;
    cin >> list1[0];
    for (i=1; i<= list1[0]; i++)
    cin>> list1[i];
    
    cout <<"Enter list 2: ";
    int list2[20];
    cin >> list2[0];
    for (i=1; i<= list2[0]; i++)
    cin >> list2[i];
    
    if (list1[0] == list2[0])
    {
        int size = list1[0];
        identical =strictlyEqual(list1, list2, size);
    }
     
    if (identical == true)
        cout << "The lists ARE strictly identical!" << endl;
    else 
        cout << "The lists ARE NOT strictly identical!" << endl;
    return 0;
}
