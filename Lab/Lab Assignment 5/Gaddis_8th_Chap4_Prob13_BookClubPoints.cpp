/* 
 * File:   Gaddis_8th_Chap4_Prob13_BookClubPoints.cpp
 * Author: Izeth Torres 
 *
 * Created on March 28, 2018, 9:12 PM
 */

#include <iostream>


using namespace std;

int main()
{
    int buy;  //Holds the amount of books the user bought 
    
    
    //Tell user what program does and ask user for number of books purchased
    cout << "This program calculates how many rewards points you earned based on\n"
            "your book purchases.\n"
            "How many books did you purchase this month?\n";
    cin >> buy;
    
    
    //Display output based on users input 
    if (buy == 0)
        cout << "You did not ear any reward points this month.\n";
    else if (buy == 1)
        cout << "You earned 5 reward points this month!\n";
    else if (buy == 2)
        cout << "You earned 15 reward points this month!\n";
    else if (buy == 3)
        cout << "You earned 30 reward points this month!\n";
    else if (buy >= 4)
        cout << "you earned 60 reward points this month!\n";
    
    return 0;
        
}