/* 
 * File:   Gaddis_8th_Chap5_Prob22_ SquareDisplay.cpp
 * Author: Izeth Torres 
 *
 * Created on March 25, 2018, 5:40 PM
 */

#include <iostream>

using namespace std;

main ()
{
    int number = 0;
    
    cout << "Please enter a a positive number no grater than 15.\n";
    cin >> number;
    
    while (number < 1 || number > 15)
    {
        cout << "Please enter a number from 1 to 15.\n";
        cin >> number;
    }
   
    for (int a = 1; a <= number; a++)
    {
        for (int b = 1; b <= number; b++)
        {
            cout << "X";
        }
    cout << endl;
    }
    
    return 0;
    
}
