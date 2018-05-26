/* 
 * File:   Gaddis_8th_Chap8_Prob4_ChargeAccountValidationModification.cpp
 * Author: Izeth Torres
 *
 * Created on May 26, 2018, 9:04 AM
 */

#include <iostream>
 
using namespace std;

//Declare size of array
const int SIZE = 18;

//Function type
bool searchAcctNum(int, int array[SIZE]);
void sortAcctNum(int array[SIZE]);
 
main()
{
    //Declare variables 
    int acctNum[] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                     8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                     1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int search = 0; 
    bool results = true;
    
    cout << "Please enter a seven digit account number.\n";
    cin >> search;
    
    //Sort account numbers
    sortAcctNum(acctNum);
    
    //Display results 
    if(results == searchAcctNum(search, acctNum))
        cout << "The account number you entered is valid." << endl;
    else
        cout << "The account number you entered is not valid." << endl;
    
return 0;
}
/******************************************************************************/
/****************Definition of searchAcctNum***********************************/
bool searchAcctNum(int value, int array[SIZE])
{
    int first = 0;
    int middle = 0;
    int last = (SIZE - 1);
    int location = 0;
    
    while(first <= last)
    {
        middle = (first + last /2);
        
        if (array[middle] == value)
            return true;
        else if (array[middle] > value)
            last = middle - 1;
        else 
            first = middle + 1;
    }
    return false;
}
/******************************************************************************
 *************************sortAcctNum*****************************************/
 
void sortAcctNum(int array[SIZE])
{
    int minInd = 0;
    int minVal = 0;
    
    for (int startScan = 0; startScan < SIZE - 1; startScan++)
    {
        minInd = startScan;
        minVal = array[startScan];
        
        for (int index = startScan + 1; index < SIZE; index++)
        {
            if (array[index] < minVal)
            {
                minVal = array[index];
                minInd = index;
            }
        }
        array[minInd] = array[startScan];
        array[startScan] = minVal;
    }
}

