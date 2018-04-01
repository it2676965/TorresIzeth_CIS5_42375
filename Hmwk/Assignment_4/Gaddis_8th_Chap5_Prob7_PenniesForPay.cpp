/* 
 * File:   Gaddis_8th_Chap5_Prob7_PenniesForPay.cpp
 * Author: Izeth Torres 
 *
 * Created on March 25, 2018, 12:26 PM
 */
//This program calculates how much a person would earn if they earned a penny 
//one day and then double each day. Asking the user the number of days.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    //Declare variables 
    int days;               //Days with salary 
    double pay = 0.01;      //Salary of one penny
    double total = 0.0;     //Total salary earned
    double dayPay = 0.0;    //Salary earned per day 
    
    //Display purpose of program to user and request input 
    cout << "This program will calculate how much you would earn if you earned\n"
            "a penny a day and it doubled each day.\n";
    cout << "Enter how many days you would earn salary:\n";
    cin >> days;
    
    //If days are less than 1, display error message 
    while (days < 1)
    {
        cout << "Please enter a number 1 or higher for days\n";
        cin >> days;
    }
    
        //Display table header 
        cout << "This table shows the salary you would earn:\n";
        cout << "Day \t\tSalary\n";
        cout << "--------------------------------------------\n";
     
    ////Set numeric formating
    cout << fixed << showpoint << setprecision(2);
    
    //Calculate daily rate in accumulating days
    for (int a = 1; a <= days; a++) 
    {
   
        dayPay = pay * pow(2, a-1);
        cout << a << "\t\t" << "$" << dayPay << endl;
        total += dayPay; //accumulate total 
      
    }
    //Display total
    cout <<"The total salary for " << days << " days is $" << total << endl;
    return 0;
}

