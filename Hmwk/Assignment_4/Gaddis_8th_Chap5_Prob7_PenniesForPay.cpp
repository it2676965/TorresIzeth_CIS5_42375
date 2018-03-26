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
    int days;
    double pay = 0.01; //Salary of one penny
    double total = 0.0;
    double dayPay = 0.0;
    
    cout << "This program will calculate how much you would earn if you earned\n"
            "a penny a day and it doubled each day.\n";
    cout << "Enter how many days you would earn salary:\n";
    cin >> days;
    
    while (days < 1)
    {
        cout << "Please enter a number 1 or higher for days\n";
        cin >> days;
    }
        cout << "This table shows the salary you would earn:\n";
        cout << "Day \t\tSalary\n";
        cout << "--------------------------------------------\n";
    
   
    for (int a = 1; a <= days; a++) 
    {
   
        dayPay = pay * pow(2, a-1);
        cout << a << "\t\t" << "$" << dayPay << endl;
        total += dayPay; //accumulate total 
      
    }
    //Display total
    cout << fixed << showpoint << setprecision(2);
    cout <<"The total salary for " << days << " days is $" << total << endl;
    return 0;
}

