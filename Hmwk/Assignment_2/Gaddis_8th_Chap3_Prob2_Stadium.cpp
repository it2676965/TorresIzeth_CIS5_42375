/* 
 * File:   Stadium Seating.cpp
 * Author: Izeth Torres
 *
 * Created on March 8, 2018, 7:11 PM
 *///This program requests the number of tickets sold per class value
//then displays income amount generated from ticket sales 

#include <iostream>
#include <iomanip>
using namespace std;

main ( ) 
{ 
int clA, clB, clC;
double sold, total; 

//Get the number of class A tickets sold
cout << "How many Class A tickets were sold?\n";
cin >> sold;
clA = 15 * sold;

//Get the number of class B tickets sold
cout << "How many Class B tickets were sold?\n";
cin >> sold;
clB = 12 * sold;

//Get the number of class C tickets sold
cout << "How many Class C tickets were sold?\n";
cin >> sold;
clC = 9 * sold;

cout << setprecision(2) << fixed;

//Tally total amount in ticket sales 
total = clA + clB + clC;

//Display income generated from ticket sales 
cout << "Total amount of ticket sales $" << total << endl;

return 0;
}
