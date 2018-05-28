/* 
 * File:   Project2_BlackJack.cpp
 * Author: Izeth Torres
 *
 * Created on May 27, 2018, 1:49 PM
 */

#include <iostream>
#include <ctime>

using namespace std;

void shuffle(bool deck[]);
void prCard(int card);
void prHand(int hand[], const int count);
int nexCard(bool deck[]);
int scHand(int hand[], const int count);
void prAll(int H_hand[], const int H_count, int P_hand[], const int P_count);

int main() 
{
    bool deck[52];          //Holds deck of 52 cards
    int H_hand[13];         //Holds house hands
    int H_count = 0;        //Holds count of house hands
    int P_count = 0;        //Holds count of player hands
    int P_hand[13];         //Holds players hands
    
    //Initialize game 
    while(true)
    {
        //Call for shuffle cards 
        shuffle(deck);
        
    }
            
    return 0;
}
/******************************************************************************/
/******************************Shuffle cards***********************************/
void shuffle(bool deck[])
{
    for (int i = 0; i < 52; i++)
        deck[i] = false;
}
/******************************************************************************/
/***********************Print cards*******************************************/
void prCard(int card)
{
    //Print card values
    const int value = (card % 13);
    
    if (value == 0)         //Call for Aces
    {
        cout << 'A';    
    }
    else if (value < 9)    //Call for all numeric cards
    {
        cout << (value + 1);
    }
    else if (value == 10)   //Call for Jacks
    {
        cout << 'J';
    }
    else if (value == 11)   //Call for Queens
    {
        cout << 'Q';
    }
    else                    //Call for Kings
        cout << 'K';
    
    //Print car suit
    const int suit = (value/13);
    
    if (suit == 0)          //Call for Clubs
    {
        cout << 'Clubs';
    }
    else if (suit == 1)     //Call for Diamonds
    {
        cout << 'Diamonds';
    }
    else if (suit == 2)     //Call for Hearts
    {
        cout << 'Hearts';
    }
    else                    //Call for Spades
    {
        cout << 'Spades';
    }
}
/******************************************************************************/
/****************************Print hand****************************************/
void prHand(int hand[], const int count)
{
    
}
/******************************************************************************/
/**************************Deal next card**************************************/
int nexCard(bool deck[])
{
    
}
/******************************************************************************/
/**************************Score individual hands******************************/
int scHand(int hand[], const int count)
{
    
}
/******************************************************************************/
/*************************Total score******************************************/
void prAll(int H_hand[], const int H_count, int P_hand[], const int P_count)
{
    
}