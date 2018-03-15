/* 
 * File:   Word Game.cpp
 * Author: Izeth Torres
 *
 * Created on March 9, 2018, 5:39 PM
 */
//This program generates a word game where the user is asked for input
//and the results are displayed in a predetermined story 

#include <iostream>
#include <iomanip>

using namespace std;

main ( ) 
{
//variables
string name, city, college, animal, profession, petname, age;

//Request information from user 
cout << " What is your name?\n";
getline (cin, name);
cout << "What is your age?\n";
getline (cin, age);
cout << "Provide the name of a city.\n";
getline (cin, city);
cout << "Provide the name of a college.\n";
getline (cin, college);
cout << "Provide a profession.\n";
getline (cin, profession);
cout << "Provide a type of animal.\n";
getline (cin, animal);
cout << "Provide a pets name.\n";
getline (cin, petname);

//Display story 
cout << "There once was a person named " << name << " who lived in " << city << "." << " At the age of " << age << ", " << name << " went to college at " << college << ". " << name << " graduated and went to work as a " << profession << ". Then, " << name << " adopted a(n) " << animal << " named " << petname << ". They both lived happily ever after!\n";

return 0;
}