/* 
 * File:   Box Office.cpp
 * Author: Izeth Torres
 *
 * Created on March 8, 2018, 8:36 PM
 */
//This program calculates the revenue of a movie theater and the amount paid to 
//the distributor 

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
 
using namespace std;

main ( )
{ 

    string movie;
    int aduTicket, chiTicket, gross, net, dist;
    
    //Ask  for movie name and ticket sales 
    cout << "What movie was watched?\n";
    getline (cin, movie);
    cout << "How many adult tickets were sold?\n";
    cin >> aduTicket;
    cout << "How many children tickets were sold?\n";
    cin >> chiTicket;
    
    //Calculate total of ticket sales 
    gross = (aduTicket * 10) + (chiTicket * 6);
    
    //Calculate net earnings
    net = gross * .20;
    
    //Calculate amount paid to distributor
    dist = gross - net;
   
    //Display results
    cout << "Movie name:" <<setw(20) << "\"" << movie << "\"\n";
    cout << "Adult tickets sold: " << setw(12) << aduTicket << endl;
    cout << "Child tickets sold: " << setw(12) << chiTicket << endl;
    cout << "Gross box office profits:" << setw(6) <<"$" << gross << endl;
    cout << "Net box office profits:" << setw(8) << "$" << net << endl;
    cout << "Amount paid to distributor:" << setw(4) << "$" << dist << endl;
    
    return 0;
}