/*
 * This program will let a salsa maker keep track of the sales of their five different 
 * salsas. It will ask the user to enter how much of each salsa was sold and the 
 * program will determine which salsas are the lowest and highest selling. 
 */

/* 
 * File:   Gaddis_8th_Chap7_Prob3_ChipsAndSalsa.cpp
 * Author: Izeth Torres 
 *
 * Created on May 20, 2018, 2:15 PM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Function types 
int sales(string[], int[]);
int largest(int[]);    
int lowest(int[]);    
void salesReport (string[], int[], int);
const int SIZE = 5;

int main() 
{
    //Holds salsa names
    string name[SIZE] = {"mild", "medium", "sweet", "hot", "zesty"}; 
    //Holds jars sold per salsa type
    int jars[SIZE];
    
    //Holds total number of jars sold
    int totalJars = sales(name, jars);
    
    //Identifies info to be displayed in report
    salesReport(name, jars, totalJars);
    
    //Introduction of program
    cout << "This program will take the numbers of each salsa sold and determine\n"
            "the total sales, lowest selling salsa, and highest selling salsa.\n"; 

    return 0;
}
/*************************
 *******Sales Data********/

int salesReport(string name[], int sales[])
{
    int total = 0;
    
    for (int index = 0; index < SIZE; index++)
    {
        cout << "How many jars were sold last month for each salsa type?\n";
        cout << name[index] << ": ";
        cin >> sales[index];
        
        while (sales[index] < 0)
        {
            cout << "Please enter a number larger than 0.\n";
            cin >> sales[index];
        }
        
        total += sales[index];
    }
    return total;
}

/***************************
 ********Report*************/

void salesReport (string name[], int sales[], int total)
{
    int large = largest(sales);
    int low = lowest(sales);
    
    cout << "\n\n Sales Report \n\n";
    cout << "Salsa Type" << setw(8) << "Jars Sold\n";
    cout << "---------------------------\n";
    
    for (int index = 0; index < SIZE; index++)
        cout << name[index] << setw(8) << sales[index] << endl;
    
    cout << "Total sales:" << total << endl;
    cout << "Lowest seller:" << name[large] << endl;
    cout << "Largest seller:" << name[low] << endl;
}

/*****************************************
 *******Calculate Largest Sales**********/

int largest(int array[])
{
    int indexLarge = 0;
    
    for (int index = 1; index < SIZE; index++)
    {
        if (array[index] > array[indexLarge])
            indexLarge=index;
    }
    
    return indexLarge;
}

/*******************************************
 **********Calculate Lowest Sales***********/
int lowest(int array[])
{
    int indexLowest = 0;
    
    for (int index = 1; index < SIZE; index++)
    {
        if (array[index] < array[indexLowest])
            indexLowest = index;
    }
    
    return indexLowest;
}


