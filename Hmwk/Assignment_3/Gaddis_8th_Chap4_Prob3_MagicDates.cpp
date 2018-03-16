/* 
 * File:   Magic Dates.cpp
 * Author: Izeth Torres
 *
 * Created on March 15, 2018, 2:49 PM
 */
// This program asks the user to enter a date and it will determine if it is a 
//magic date or not

#include <iostream>

using namespace std;

main ( )
{
 int day, month, year;
 
 cout << "This program will determine if the date you enter is considered a "
         "magic date or not.\n";
 cout << "Please enter a numerical day\n";
 cin >> day;
 cout << "Please enter a numerical month\n";
 cin >> month;
 cout << "Please enter a two-digit year\n";
 cin >> year;
 
 if (day * month == year)
     cout << "The date you entered is magic!\n";
 else
     cout << "The date you entered is not magic\n";
 
 return 0;
}