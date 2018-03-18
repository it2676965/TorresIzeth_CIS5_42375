/* 
 * File:   Gaddis_8th_Chap4_Prob8_ColorMixer.cpp
 * Author: Izeth Torres 
 *
 * Created on March 18, 2018, 10:33 AM
 */
//This program calculates the color created by mixing two different primary colors

#include <iostream>

using namespace std;

main ( )
{

 char red='R', yellow='Y', blue='B', color1, color2;
         
 cout << "This program determines what color is made when you mix two primary colors\n";
 cout << "Primary colors are yellow(Y), blue(B), and red(R).\n";
 cout << "Please choose one primary color by entering its capital letter:\n";
 cin >> color1;
 cout << "Please choose a second primary color by entering its capital letter:\n";
 cin >> color2;
  
 if ((color1 == red && color2 == blue) || (color1 ==blue && color2 ==red))
     cout << "Your secondary color is purple.\n";
 else if ((color1 == blue && color2 == yellow) || (color1 == yellow && color2 == blue))
     cout << "Your secondary color is green.\n";
 else if ((color1 == yellow && color2 == red) || (color1 == red && color2 == yellow))
     cout << "Your secondary color is orange.\n";
 else
     cout << "You did not enter a capital letter for red(R), yellow(Y) or blue(B).\n";
 return 0;
}
