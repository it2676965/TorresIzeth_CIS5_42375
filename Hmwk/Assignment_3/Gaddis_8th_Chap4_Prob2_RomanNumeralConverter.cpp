/* 
 * File:   Roman Numeral Converter.cpp
 * Author: Izeth Torres 
 *
 * Created on March 15, 2018, 1:55 PM
 */
// This program converts numbers 1-10 to Roman numerals

#include <iostream>

using namespace std;

main( )
{
    int number;
   
    cout << "This program converts numbers 1-10 to Roman numerals\n";
    cout << "Enter a number 1 trough 10\n";
    cin >> number;
    
    switch (number)
    {
        case 1: cout << "I\n";
        break;
        case 2: cout << "II\n";
        break;
        case 3: cout << "III\n";
        break;
        case 4: cout << "IV\n";
        break;
        case 5: cout << "V\n";
        break;
        case 6: cout << "VI\n";
        break;
        case 7: cout << "VII\n";
        break;
        case 8: cout << "VIII\n";
        break;
        case 9: cout << "IX\n";
        break;
        case 10:cout << "X\n";
        break;
        default: cout << "You did not enter a number 1-10, please try again.\n";   
    }
      return 0;   
}

