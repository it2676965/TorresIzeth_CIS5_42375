/* 
 * File:   Gaddis_8th_Chap4_Prob13_BookClubPoints.cpp
 * Author: Izeth Torres 
 *
 * Created on March 18, 2018, 12:34 PM
 */

#include <iostream>


using namespace std;

int main()
{
    int purchased;
    
    cout << "This program calculates how many rewards points you earned based on\n"
            "your book purchases.\n"
            "How many books did you purchase this month?\n";
    cin >> purchased;
    
    if (purchased == 0)
        cout << "You did not ear any reward points this month.\n";
    else if (purchased == 1)
        cout << "You earned 5 reward points this month!\n";
    else if (purchased == 2)
        cout << "You earned 15 reward points this month!\n";
    else if (purchased == 3)
        cout << "You earned 30 reward points this month!\n";
    else if (purchased >= 4)
        cout << "you earned 60 reward points this month!\n";
    
    return 0;
        
}
