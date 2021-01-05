/*
(Count the occurrence of the numbers) Write a program that 
reads in at most 100 integers that are between 1 and 100 and 
counts the occurrence of each number in the list.*/

#include<iostream>
using namespace std;

int main()
{
	int arr[100],i=0,count,num,cnt=0,temp;
	cout<<"\nEnter a list of at most 100 integer between 1 and 100 (input ends with 0):\n";
	while(true || cnt<100)
	{
		cin>>arr[i];
		cnt++;
		if(arr[i]==0) break;
		else
		i++;
	}
	cout<<endl;
	//sorting the array
	for(int j=0;j<i;j++)
	{
		for(int k=0;k<i;k++)
		{
			if(arr[j]<arr[k])
			{
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
		}
	}
	for(int j=0;j<i;j++)
	{
		num=arr[j];
		count=1;
		if(num>0)
		{
			for(int k=j+1;k<i;k++)
			{
				if(num==arr[k])
				{
					count++;
					arr[k]=-1;
				}
			}
			cout<<"\n"<<"Number "<<num<<" occurs "<<count<<" times";
		}
	}
}
