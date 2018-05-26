/*
 * Write a program that asks the user for a file name. Assume the file contains 
 * a series of numbers, each written on a separate line. The program should read
 * the contents of the file into an array and then display the following data:
 * The lowest number in the array
 * The highest number in the array
 * The total of the numbers in the array
 * The average of the numbers in the array
 */

/* 
 * File:   Gaddis_8th_Chap7_Prob7_NumberAnalysisProgram.cpp
 * Author: Izeth Torres 
 *
 * Created on May 20, 2018, 10:48 PM
 */

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main() 
{
    const int ARRAY = 12;   //Array of 12 
    int number[ARRAY];      //Holds data in array 
    string file;            //To hold user file name
    double lowest, highest, average;
    int total = 0,
        count = 0;
    ifstream infile;
    
    //Ask user for file name
    cout << "Please enter the name of the file you want to open.\n";
    cin >> file;
    
    //Open file
    infile.open(file);
    
    while (count < ARRAY && infile >> number[count])
    {
        count++;
    }
    infile.close();
    
    highest = number[0];
    lowest = number[0];
    
    for (count = 0; count < ARRAY; count++)
    {
        if(number[count] < lowest)
            lowest = number[count];
        else(number[count] > highest);
                highest = number[count];
    }
    
    for(count = 0; count < ARRAY; count ++)
    {
        total += number[count];
    }
    
    average = total / ARRAY;
    
    cout << "The lowest number is: " << lowest << endl;
    cout << "The highest number is: " << highest << endl;
    cout << "The total of all the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;
    return 0;
}