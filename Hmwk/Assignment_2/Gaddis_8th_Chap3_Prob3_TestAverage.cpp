/* 
 * File:   Test Average.cpp
 * Author: Izeth Torres 
 *
 * Created on March 8, 2018, 7:38 PM
 */
//This program calculates the average test score out of five test scores

#include <iostream>
#include <iomanip>
using namespace std;

main ( )
{
double test1, test2, test3, test4, test5;
double average;

//Get five test scores
cout << "Enter fist test score: ";
cin >> test1;
cout << "Enter second test score: ";
cin >> test2;
cout << "Enter third test score: ";
cin >> test3;
cout << "Enter fourth test score: ";
cin >> test4;
cout << "Enter fifth test score: ";
cin >> test5;

cout << setprecision(1) << fixed; 

//Calculate the average of the five test scores
average = (test1 + test2 + test3 + test4 + test5) /5.0;

//Display the average
cout << "The average score is: " << average << endl;

return 0;
}