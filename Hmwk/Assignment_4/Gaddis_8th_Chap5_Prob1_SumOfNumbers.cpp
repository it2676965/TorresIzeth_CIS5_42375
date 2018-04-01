/* 
 * File:   Gaddis_8th_Chap5_Prob1_SumOfNumbers.cpp
 * Author: Izeth Torres
 *
 * Created on March 24, 2018, 11:32 AM
 */

#include <iostream>
using namespace std;
int main()
{

//Define variables 
int number = 0;     //Number requested from user 
int total = 0;      //Total sum of numbers 

//Request input from user 
cout << "This program will ask you for a number and then add all integers from \n"
        "1 to the number you enter.\n";
cout << "Enter a number:\n";
cin >> number;

//Validate input
while (number < 0)
{
    cout << "You did not enter a positive integer. Please enter a positive integer\n";
    cin >> number; 
}

    //Read number and calculate sums 
    for (int count = 1; count <= number; count++)
    { 
        total += count;
    } 

//Display total of calculations 
cout << "The total sum from 1 to " << number << " is: " << total << endl;
    
return 0;
}
