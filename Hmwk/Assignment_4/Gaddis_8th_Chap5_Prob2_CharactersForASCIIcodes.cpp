/* 
 * File:   Gaddis_8th_Chap5_Prob2_CharactersForASCIIcodes.cpp
 * Author: Izeth Torres
 *
 * Created on March 24, 2018, 12:39 PM
 */

#include <iostream>

using namespace std;

int main ()
{

char a =0;

cout<<"This program will display the first 127 characters from ASCII code\n";
cout << "-------------------------------------------------------------------\n";

for (int count = 1; count <= 127; count++)
{
    cout << a;
    if ( a % 16 == 0)
        cout << a << endl;
        a++;
    
}

return 0;

}