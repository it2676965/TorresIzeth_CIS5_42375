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
    int years = 0;               //Number of years to collect data
    double moRain = 0;          //Rainfall per month 
    const int tlMon = 12;       //Total number of months with data
    double tlRain = 0.00;       //Total rainfall  tlRain
    
    //Display message and request number of years to collect data
    cout << "This program calculates the average rainfall over a number of years\n";
    cout << "Please enter the number of years you have data for:\n";
    cin >> years;
    
    //If years are less than 1, display error message 
    while (years < 1)
    {
        cout << "Please enter a number number 1 or larger for years.\n";
        cin >> years; 
    }
    
    //Calculate number of years and request rainfall for every month 
    for (int a = 1; a <= years; a++)
    {
        for (int months = 1; months <= tlMon; months++)
        {
            cout << "Enter the rainfall for month " << months << " in inches:\n";
            cin >> moRain;
            
            //If user enters a negative number for rainfall, display error message
            while (moRain < 0)
            {
                cout << "Please enter a positive number for rainfall:";
                cin >> moRain;
                       
            }
            //Calculate total amount of rain 
            tlRain += moRain;
        }
        
    }
    //set numeric formating 
    cout << fixed << showpoint << setprecision(2);
    
    //Display output 
    cout << "Number of months is: " << years * tlMon << endl;
    cout << "Total rainfall is: " << tlRain << " inches." << endl;
    cout << "Average rainfall per month is: " << tlRain / 
            (tlMon * moRain) << " inches.";
    
    return 0;
}
