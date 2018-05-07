/*
 * This program will generate a random coin toss and will ask the user in a 
 * function, how many times they would like the coin tossed.
 */

/* 
 * File:   Gaddis_8th_Chap6_Prob8_CoinToss.cpp
 * Author: Izeth Torres  
 *
 * Created on May 6, 2018, 11:19 AM
 */

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int coinToss(void)
{
    int random;
    
    random = 1+ rand() %2;
    return random;
}

int main(int argc, char** argv) {
    
    //Declare variables 
    int number = 0;
    int random = 0;
    string headsORtails = "";
    
    cout << "This program simulates a coin toss, how many times would you like "
            "the coin to be tossed?\n";
    cin >> number;
    
    //Random number generator
    srand((time(0)));
    
    for (int i=1; i<= number; i++)
    {
        random = coinToss();
        
        if (random == 1)
            headsORtails = "Heads";
        else if (random == 2)
            headsORtails = "Tails";
        
        cout << headsORtails << endl;    
    }
    return 0;
}


