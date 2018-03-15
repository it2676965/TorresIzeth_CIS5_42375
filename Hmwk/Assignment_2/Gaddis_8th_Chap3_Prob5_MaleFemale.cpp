/* 
 * File:   Male and Female Percentages.cpp
 * Author: Izeth Torres
 *
 * Created on March 8, 2018, 8:14 PM
 */
// This programs the percentage of female and male students registered in one class

#include <iostream>
#include <cmath>

using namespace std;

main ( ) 
{
double students, male, female;  //Holds the number of students
double perFemale, perMale; //Holds the percentage of males and females.

//Request how many students in class, how many male, how many female.
cout << "How many students are registered for the class?\n";
cin >> students;
cout << "How many students are female?\n";
cin >> female;
cout << "How many students are male?\n";
cin >> male; 

//Calculate percentage of female students 
perFemale= (female / students) * 100;

//Calculate percentage of male students 
perMale = (male /students) * 100;

//Display percentage amounts
cout << "Percentage of female students: " << perFemale << "%" << endl;
cout << "Percentage of male students: " << perMale << "%" << endl;

return 0;
}