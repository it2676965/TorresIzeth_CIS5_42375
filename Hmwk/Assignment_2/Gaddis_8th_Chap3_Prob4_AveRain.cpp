/* 
 * File:   Average Rainfall.cpp
 * Author: Izeth Torres
 *
 * Created on March 8, 2018, 7:48 PM
 */
//This program calculates the average rainfall of three months 

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; 

main ( )
{
string month1, month2, month3;  //To hold the names of the months 
int rain1, rain2, rain3;        //To hold the amount of rain for each month
double average;                 //To hold the average rainfall

//Get three months and rainfall for month 
cout << "What month was measured first?\n";
cin >> month1;
cout << "How many inches of rainfall were there for the first month?\n";
cin >> rain1;
cout << "What month was measured second ?\n";
cin >> month2;
cout << "How many inches of rainfall were there for the second month?\n";
cin >> rain2;
cout << "What month was measured third?\n";
cin >> month3;
cout << "How many inches of rainfall were there for the third month?\n";
cin >> rain3;

cout << setprecision(2) << fixed;
//Calculate the average of all three months of rain
average= (rain1 + rain2 + rain3) / 3.00;

//Display months and average rainfall for those months
cout << "The average rainfall for " << month1<< ", " << month2 << ", and " << month3 << " is " << average << " inches.\n";

return 0;
}