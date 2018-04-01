/* 
 * File:   Gaddis_8th_Chap5_Prob22_ SquareDisplay.cpp
 * Author: Izeth Torres 
 *
 * Created on March 25, 2018, 5:40 PM
 */
//This program will ask the user to enter a between 1 and 15. The program will 
//square that number and display it in X's.

#include <iostream>

using namespace std;

main ()
{
    int number = 0;     //Initialize  number at 0
    
    //Ask user to enter a number 
    cout << "Please enter a a positive number no grater than 15.\n";
    cin >> number;
    
    //If number is less than 1 or greater that 15, display error message 
    while (number < 1 || number > 15)
    {
        cout << "Please enter a number from 1 to 15.\n";
        cin >> number;
    }
   
    //Initialize loop for number entered and set up rows 
    for (int a = 1; a <= number; a++)
    {
        //Display X's in rows 
        for (int b = 1; b <= number; b++)
        {
            cout << "X";
        }
    cout << endl;
    }
    
    return 0;
    
}
