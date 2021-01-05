/* Week 9 Lab Exercises Question 2:

(Stopwatch) Design a class named StopWatch. The class contains:
• Private data fields startTime and endTime with appropriate get functions.
• A no-arg constructor that initialises startTime with the current time.
• A function named start() that resets the startTime to current time.
• A function named stop() that sets the endTime to current time.
• A function named getElapsedTime() that returns the elapsed time for the stop watch in seconds.

Write a test program that measures the execution time of sorting 100000 numbers using selectionSort.*/

#include <iostream>
#include <time.h>
#include <random>
using namespace std;

class StopWatch
{
private:
long startTime, endTime;
public:
    // get functions
    long get_startTime()
    {
        return startTime;
    }
    long get_endTime()
    {
        return endTime;
    }
    // constructor
StopWatch()
    {
        time(&startTime);
    }
    void start()
    {
        time(&startTime);
    }
    void stop()
    {
        time(&endTime);
    }
    double getElapsedTime()
    {
        return double(endTime - startTime);
    }
};

// function for selection sort of 100000 numbers

void selection_sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        // find index of ith minimum element
        int min = i;
        for (int j = i + 1; j < size; j++)
            if (array[j] < array[min])
                min = j;
        int t = array[min];
        array[min] = array[i];
        array[i] = t;
    }
}

int main()
{
    int size = 100000;
    // generate array
    int array[size];
    srand(time(0));
    cout << "Generating 100000 random numbers...\n";
    for (int i = 0; i < size; i++)
        array[i] = rand();
    cout << "...done. Now sorting the array...\n";
    // find execution time
    StopWatch execution_time;
    execution_time.start();
    selection_sort(array, size);
    execution_time.stop();
    cout << "Sorting the array took: " << execution_time.getElapsedTime() << " s\n";
}
