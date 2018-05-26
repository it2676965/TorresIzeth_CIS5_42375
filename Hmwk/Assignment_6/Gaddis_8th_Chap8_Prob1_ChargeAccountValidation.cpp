/* 
 * File:   Gaddis_8th_Chap8_Prob1_ChargeAccountValidation.cpp
 * Author: Izeth torres
 *
 * Created on May 23, 2018, 1:46 PM
 * 
 */

#include <iostream>
 
using namespace std;

//Function type
int searchAcctNum(const int [], int, int);
const int SIZE = 18;
 
main()
{
    int acctNum[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                        1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int search ; 
    int results;
    
    //User input request 
    cout << "Please enter the seven digit number you would like to search for.\n";
    cin  >> search;
    
    //Search for the charge account number
    results = searchAcctNum(acctNum, SIZE, search);
    
    //If searchAcctNum returns -1, display message
    if (results == -1)
    {
        cout << "The number you entered is invalid.\n";
    }
    else
    {
        //If searchAcctNum returns a result, display message
        cout << "The number you entered is valid" << endl; 
    }
    return 0;
}

/*******************************************************************************
 ******************Definition of searchAcctNum function************************/
 
int searchAcctNum(const int list[], int numElems, int value)
{
    int index = 0;          //Subscript used to search array
    int location = -1;      //Record position of search value
    bool found = false;     //Flags indicating value was found
    
    while (index < numElems && !found)
    {
        if (list[index] == value)               //If value is found
        {
            found = true;                       //Record value found
            location = index;                   //Record value subscript
        }
        index++;                                //Go to next element
    }
    return location;                            //Return position or -1
}

