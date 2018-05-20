/*
 * This program lets the user enter 10 values into an array.
 * The program then displays the largest and smallest values stored in the array.
 * 
 */

/* 
 * File:   Gaddis_8th_Chap7_Prob1_LargestAndSmallestArrayValues.cpp
 * Author: Izeth Torres
 *
 * Created on May 20, 2018, 12:17 PM
 */

#include <iostream>

using namespace std;

int main() 
{
    const int NUMBERS = 10;     //Number of values
    int values[10];             //Array to hold values 
    int largest = 0;            //Largest value
    int smallest = 0;           //Smallest value
    int size = 0;               //Number to determine which is smaller and larger
    
    //Explain program to user
    cout<< "This program will ask the user to enter 10 values.\n"
            "The program will then display the largest and smallest values entered.\n";
    
    //Get numbers from user
    for (int index = 0; index < NUMBERS; index++)
    {
        cout << "Enter value " << (index +1) << ": " << endl;
        cin >> values[index];
    }
    
    //Calculate smallest and largest values 
    smallest = values[0];
    largest = values[0];
    
    for (int i = 1; i <= 10; i++)
    {
        size = values[i];
        
        if (size < smallest)
            smallest = size;
        
        if (size > largest)
            largest = size;    
    }
    
    //Display largest and smallest values 
    cout << "The smallest number you entered was: " <<smallest<< endl;
    cout << "The largest value you entered was: " << largest << endl;

    return 0;
}

