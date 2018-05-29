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
        cout << 'C';
    }
    else if (suit == 1)     //Call for Diamonds
    {
        cout << 'D';
    }
    else if (suit == 2)     //Call for Hearts
    {
        cout << 'H';
    }
    else                    //Call for Spades
    {
        cout << 'S';
    }
}
/******************************************************************************/
/****************************Print hand****************************************/
void prHand(int hand[], const int count)
{
    for (int index = 0; index< count; index++)
    {
        const int nx_card = hand[index];
        prCard(nx_card);
        cout << " " << endl;
    }
}
/******************************************************************************/
/**************************Deal next card**************************************/
int nexCard(bool deck[])
{
    bool c_dealt = true;        //Set card dealt to true
    int nw_card = -1;           //Initialize new card
    
    do  //Deal new card when requested 
    {
        nw_card = (rand()%52);
        
        if(!deck[nw_card])
        {
            c_dealt = false;
        }
    }
    while (c_dealt);
    return nw_card;        
}
/******************************************************************************/
/**************************Score individual hands******************************/
int scHand(int hand[], const int count)
{
    int countAc = 0;        //Ace count
    int score = 0;          //Score count
    
    for (int i = 0; i < count; i++)     //Set card counter
    {
        const int nx_card = hand[i];
        const int rank = (nx_card%13);
        
        if (rank ==0)          //Return score and Ace card
        {
            ++countAc;
            ++score;
        }
        else if (rank < 9)      //Return score plus value of new card
        {
            score = score + (rank +1);
        }
        else                    //Return score plus card with value of 10
        {
            score = score +10;
        }
        return score;           //Display score of total hands
    }
}
/******************************************************************************/
/*************************Total score******************************************/
void prAll(int H_hand[], const int H_count, int P_hand[], const int P_count)
{
    //Display house score and hands dealt
    cout << "House score: " << scHand(H_hand, H_count) << endl; 
    prHand(H_hand, H_count);
    cout << endl;
    
    //Display players score and hands dealt
    cout << "Players score: " << scHand(P_hand, P_count) << endl;
    prHand(P_hand, P_count);
    cout << endl;
}