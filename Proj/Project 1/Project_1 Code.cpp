/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Project_1.cpp
 * Author: Izeth Torres 
 *
 * Created on April 17, 2018, 7:28 PM
 */

#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <cmath>

using namespace std; 

main ()
{
    //Assign random cards to player 
    srand((unsigned)time(0));
    int pcard_1 = rand() % 11 + 1;
    int pcard_2 = rand() % 11 + 1;
    int pcard_3 = rand() % 11 + 1;
    int pcard_4 = rand() % 11 + 1;
    
    //Assign random card to dealer 
    int dcard_1 = rand() % 11 + 1;
    int dcard_2 = rand() % 11 + 1;
    
    //Assign other variables
    char a, b, c, d;            //Request input of yes or no for new card
    char deal;                  //Will hold yes or no value when card is requested 
    int playTl_1 = (pcard_1 + pcard_2);             //Player initial total
    int playTl_2 = (pcard_1 + pcard_2 + pcard_3);   //Player total after 3 cards
    int playTl_3 = (pcard_1 + pcard_2 + pcard_3);   //Player total after 4 cards 
    int dealTl = (dcard_1 + dcard_2);               //Dealers cards total 
    
    //Welcome message
    cout << "Welcome to Blackjack\n"
            "----------------------------------------------------\n"
            "Try to beat the dealer by scoring higher than them, \n"
            "but not scoring higher than 21\n"
            "----------------------------------------------------\n";
    
    //Show players first two cards and one of dealers cards
    cout << "Your cards are " << pcard_1 << " and " << pcard_2 << " for a total of " << playTl_1 << endl;
    cout << "Dealer has a card of " << dcard_1 << " and a hidden card.\n";
    
    //Request input from player weather they want another card 
    cout << "Would you like another card? Type 'a' for yes or 'b' for no.\n";
    cin >> deal;
 

    if (deal == 'a') //If player chooses to take third card 
    {   
        //Display players three cards 
        cout << "Your cards are " << pcard_1 << ", " << pcard_2 << " and " << pcard_3 << " for a total of " << playTl_2 << endl;
        
            if (playTl_2 > 21) //Player losses, display loss message 
            {    
                cout << "You loose, you went over 21.\n";
            }   
            else if (playTl_2 < 21) //Player still under 21, request new card 
            {
                cout << "Would you like another card? Type 'c' for yes and 'd' for no.\n";
                cin >> deal;    //Requesting if player wants fourth card 
            }
    }
    if (deal == 'b') //If player denies third card 
    {   
        //Reveal dealers cards display players three cards 
        cout << "Dealer has " << dcard_1 << " and " << dcard_2 << " for a total of " << dealTl << endl;
        cout << "You have a total of " << playTl_1 << endl;
        
            if (dealTl > playTl_1) //If player looses, display error message
            {
                cout << "Sorry, you loose. Dealer scored higher than you.\n";
            }
            else if (dealTl < playTl_1);//If player wins, displays win message
            {
                cout << "Congratulations, you win! You scored higher than the dealer.\n";
            }
    }
    if (deal == 'c') //If player requests fourth card 
    {
        //Display players four cards and reveal dealers cards 
        cout << "Your cards are " << pcard_1 << ", " << pcard_2 << ", "  << pcard_3 << " and " << pcard_4 <<" for a total of " << playTl_3 << endl;
        cout << "Dealer has " << dcard_1 << " and " << dcard_2 << " for a total of " << dealTl << endl;
                
            if (playTl_3 > 21) //If player goes over 21, display loss message
            {
                cout << "You went over 21, you loose\n";
            }
            else if ((playTl_3 < 21) || (dealTl < playTl_3)) //If player score higher than dealer, display win message 
            {
                cout << "Congratulations! you win.\n";
            }
    }
    if (deal == 'd') //If player denies third card 
    {
        //Display players cards and reveal dealers cards 
        cout << "Your cards are " << pcard_1 << ", " << pcard_2 << " and " << pcard_3 << " for a total of " << playTl_2 << endl;
        cout << "Dealer has " << dcard_1 << " and " << dcard_2 << " for a total of " << dealTl << endl;
                       
            if ((playTl_2 < 21) || ( playTl_2 > dealTl)) //If player scores higher than dealer, display win message
            {
                cout << "Congratulations! You win.\n";
            }
            else if ((playTl_2 < 21) || (playTl_2 < dealTl)) //If dealer scores higher, display loss message
            {
                cout << "Dealer scored higher, you loose.\n";
            } 
    }
            return 0;
}
