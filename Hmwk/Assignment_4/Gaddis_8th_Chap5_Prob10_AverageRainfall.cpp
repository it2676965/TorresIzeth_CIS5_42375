/* 
 * File:   Gaddis_8th_Chap5_Prob10_AverageRainfall.cpp
 * Author: Izeth Torres 
 *
 * Created on March 25, 2018, 3:43 PM
 */
//This program averages the rainfall over several years. The program will ask 
//the user to enter the number of years. It will then take the rainfall for each
//month of each year and display the average rainfall per month.

#include <iostream>
#include <iomanip>

using namespace std;

main ()
{
    int years = 0;                  //Number of years to collect data
    float monthRainfall = 0;        //Rainfall per month
    const int totalMonths = 12;         //Total number of months with data
    float averageRainfall = 0.00;   //Average rainfall per month
    float totalRainfall = 0.00;
    
    cout << "This program calculates the average rainfall over a number of years\n";
    cout << "Please enter the number of years you have data for:\n";
    cin >> years;
    
    while (years < 1)
    {
        cout << "Please enter a number number 1 or larger for years.\n";
        cin >> years; 
    }
    
    for (int a = 1; a <= years; a++)
    {
        for (int months = 1; months <= totalMonths; months++)
        {
            cout << "Enter the rainfall for month " << months << " in inches:\n";
            cin >> monthRainfall;
            
            while (monthRainfall < 0)
            {
                cout << "Please enter a positive number for rainfall:";
                cin >> monthRainfall;
                       
            }
            totalRainfall += monthRainfall;
        }
        
    }
    cout << fixed << showpoint << setprecision(2);
    cout << "Number of months is: " << years * totalMonths << endl;
    cout << "Total rainfall is: " << totalRainfall << " inches." << endl;
    cout << "Average rainfall per month is: " << totalRainfall / 
            (years * monthRainfall) << " inches.";
    
    return 0;
}
