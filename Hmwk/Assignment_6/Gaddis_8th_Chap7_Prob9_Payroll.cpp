/******************************************************************************
/* 
 * File:   Gaddis_8th_Chap7_Prob9_Payroll.cpp
 * Author: Izeth Torres 
 *
 * Created on May 21, 2018, 11:36 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    const int empId = 7;    //Number of employees
    
    //Array to hold employee ID numbers 
    int employee[empId]= {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[empId];       //Array to hold employee hours worked
    double payRate[empId];  //Array to hold hourly pay rate of employee
    double wages[empId];    //Array to hold total wages of employee

    //Intro to program 
    cout << "This program allows to user to enter an employee number, hours worked,\n"
            "hourly pay-rate to determine the total wages of each employee.\n";
    

    for (int index = 0; index < empId; index++)
    {
        cout << "Hours worked by employee #" << employee[index] << ": " << endl;
        cin >> hours[index];
        
        while (hours[index] < 0)
        {
            cout << "Please enter a positive number for hours worked.\n";
            cin >> hours[index];
        }
        
        cout << "Pay rate for employee #" << employee[index] << ": " << endl;
        cin >> payRate[index];
        
        while (payRate[index] < 15.00)
        {
            cout << "Please enter a pay rate grater than $15.00.\n";
            cin >> payRate[index];
        }
        
    }
    
    cout << "\nTotal wages for employees\n";
    cout << "-------------------------------\n";
    cout << "Employee #     Total wages" << endl;
    
    for (int index = 0; index < empId; index++)
    {
        wages[index] = hours[index] * payRate[index];
                
        cout << fixed << showpoint << setprecision(2) << setw(8);
        
        cout << employee[index] << "        $" << wages[index] << endl;
    }
    
    return 0;
}
