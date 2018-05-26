/* 
 * File:   Gaddis_8th_Chap8_Prob6_StringSelection Sort.cpp
 * Author: Izeth Torres
 *
 * Created on May 26, 2018, 12:21 PM
 */

#include <string>
#include <iostream>
using namespace std;

void sortArray(string [], int);
void showArray(string [], int);

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


    cout << "Unsorted list of names" << endl;
    cout << "----------------------" << endl;
    showArray(names, SIZE);
    cout << endl;
    
    
    sortArray(names, SIZE);
    
    cout << "List of sorted names" << endl;
    cout << "---------------------" << endl;
    showArray(names, SIZE);
	
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
void showArray(string names[], int number)
{
    int count, i;
    
    for(count = 0; count < number; count++)
	cout << count + 1 << ". " << names[count] << endl;
}