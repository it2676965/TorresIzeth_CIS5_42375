/* 
 * File:   Gaddis_8th_Chap5_Prob3_OceanLevels.cpp
 * Author: Izeth Torres 
 *
 * Created on March 25, 2018, 11:10 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
//Declare variable 
int  year = 1;          //Years for measuring rainfall 
double level = 0;       //Rainfall level 

//Display purpose of program 
cout << "This program will display a table showing the rising ocean levels\n"
        "for the next 25 years.\n";

//Set numeric formating 
cout << fixed << showpoint << setprecision (1);

//Calculate, initialize and display ocean levels for 25 years 
for (int a = 1;  a <= 25; a++)
{
    level += 1.5;
    cout << "Year " << year  << ": " << level << "mm" <<endl;
    year++;
}

return 0;
}
