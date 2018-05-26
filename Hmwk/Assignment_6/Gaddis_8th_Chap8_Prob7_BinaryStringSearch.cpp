/* 
 * File:   Gaddis_8th_Chap8_Prob7_BinaryStringSearch.cpp
 * Author: Izeth Torres
 *
 * Created on May 26, 2018, 1:44 PM
 */
#include <string>
#include <iostream>
using namespace std;

void sortArray(string [], int);
int binarySearch(string [], int, string);

int main()
{
    const int SIZE = 20;
    string names[SIZE] = {"Collin, Bill", "Smith, Bart", "Allen, Jim", 
                          "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                          "Taylor, Terri", "Johnson, Jill", "Allison, Jeff",
                          "Looney, Joe", "Wolfe, Bill", "James, Jean", 
                          "Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
                          "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",                              
                          "Pike, Gordon", "Holland, Beth"};
    string entName;
    int results;
    
    //Sort names in alphabetical order
    sortArray(names, SIZE);
    
    //Request name from user
    cout << "Please enter the name you would like to find.\n";
    getline(cin, entName);
    
    results = binarySearch(names, SIZE, entName);
    
    //Display validation message
    if(results == -1)
        cout << "The name you entered is NOT in the array.\n";
    else
        cout << "The name you entered is in the array.\n";
    
	
	return 0;
}
/*****************************************************************************/
/*******************Definition of selectionSort*******************************/
void sortArray(string names[], int number)
{
    int startScan, minInd;
    string NAME;
        
    for(startScan = 0; startScan < (number - 1); startScan++)
    {
        minInd = startScan;
	NAME = names[startScan];
	for(int index = startScan + 1; index < number; index++)
	{
            if(names[index] < NAME)
            {
		NAME = names[index];
		minInd = index;
        	}
	}
		names[minInd] = names[startScan];
		names[startScan] = NAME;
    }
}
/******************************************************************************/
/********************Definition of showArray***********************************/
int binarySearch(string names[], int size, string number)
{
    int first = 0,
        last = size - 1,
        middle,
        position = -1;
    bool found = false;
    
    while (!found && first <= last)
    {
        middle = (first + last)/2;
        
        if (names[middle] == number)
        {
            found = true;
            position = middle;
        }
        else if (names[middle] > number)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}