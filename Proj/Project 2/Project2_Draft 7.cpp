/* 
 * File:   Project2_BlackJack.cpp
 * Author: Izeth Torres
 *
 * Created on May 27, 2018, 1:49 PM
 */

#include <iostream>
#include <ctime>

void shuffle(bool deck[]);                  //Shuffle deck function
void prCard(int card);                      //Print card function               
void prHand(int hand[], const int count);   //Print hand function
int nexCard(bool deck[]);                   //Deal next card function
int scHand(int hand[], const int count);    //Score of hand function

//Print all hands and scores function
void prAll(int H_hand[], const int H_count, int P_hand[], const int P_count);

using namespace std;

int main() 
{
    //Random number generator for card deck
    time_t time;
    
    //Variables for cards
    bool deck[52];          //Holds deck of 52 cards
    int H_hand[12];         //Holds house hands
    int countH = 0;        //Holds count of house hands
    int countP = 0;        //Holds count of player hands
    int P_hand[12];         //Holds players hands
 
    
    //Initialize game 
    while(true)
    {
        //Call for shuffle cards 
        shuffle(deck);
        
        //Set two cards to each house and player
        P_hand[0] = nexCard(deck);
        H_hand[0] = nexCard(deck);
        P_hand[1] = nexCard(deck);
        H_hand[2] = nexCard(deck);
        countH = 2;
        countP = 2;
        
        //Set variables for accepting player choice and dealing player cards
        char choice;
        bool hits = true;
        int P_score = scHand(P_hand, countP);
        
        //accept player choice and deal player cards
        do
        {
           //Print house cards
            cout << "House Cards\n"; 
            cout << "-------------------------\n";
            cout << "''Hidden card'' & ";
            prCard(H_hand[1]); 
            cout << endl;
            cout << endl;
            
            //Print dealer cards and score 
            cout << "Players Cards\n"; 
            cout << "-------------------------\n";
            prHand(P_hand, countP);
            cout << "Players score: " << scHand(P_hand, countP) << endl;

            
            //Player new card request 
            cout << "Would you like a new card? (y) for yes, (n) for no.\n";
            cin >> choice;
            
            if(choice == 'y')
            {
                P_hand[countP] = nexCard(deck);
                ++countP;
            }
            else if (choice == 'n')
            {
                hits = false;
            }
            else 
            {
                cout << "You did not enter 'y' or 'n' please try again.\n";
                cin >> choice;
            }
            //Obtain players score
            P_score = scHand(P_hand, countP);
        }while (hits && P_score <= 21);
        
        //Keep tally of score
        int H_score = scHand(H_hand, countH);
        
        while (H_score < 17)   //Get new card if house card total is less than 17
        {
            H_hand[countH] = nexCard(deck);
            ++countH;
            H_score = scHand(H_hand, countH);
        }
        
        //Declare who wins and display message and results of deal
        bool H_lost = (H_score > 21);
        
        if(H_lost)  //If house looses 
        {
            cout << "House has lost.\n";
            cout << "Congratulation, you win!\n";
            prAll(H_hand, countH, P_hand, countP);
        }
        else    //If it is a tie
        {
            if (P_score == H_score)
            {
                cout << "It is a tie!\n";
            }
            else if (P_score > H_score)  //Player wins
            {
                cout << "Congratulation, you win!\n";
                prAll(H_hand, countH, P_hand, countP);
            }
            else    //If the house wins
            {
                cout << "House wins.\n";
                cout << "Sorry, you lose!\n";
                prAll(H_hand, countH, P_hand, countP);
            }
        }
    }
            
    return 0;
}
/******************************************************************************/
/******************************Shuffle cards***********************************/
void shuffle(bool deck[])
{
    for (int i = 0; i < 52; ++i)
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
    const int suit = (card/13); 
    
    if (suit == 0)          //Call for Clubs
    {
        cout << " of Clubs";
    }
    else if (suit == 1)     //Call for Diamonds
    {
        cout << " of Diamonds";
    }
    else if (suit == 2)     //Call for Hearts
    {
        cout << " of Hearts";
    }
    else                    //Call for Spades
    {
        cout << " of Spades";
    }
}
/******************************************************************************/
/****************************Print hand****************************************/
void prHand(int hand[], const int count)
{
    for (int index = 0; index < count; index++)
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
/***********************Tally score of individual hands******************************/
int scHand(int hand[], const int count)
{
    int aCount = 0;         //Ace count
    int score = 0;          //Score count
    
    for (int i = 0; i < count; ++i)     //Set card counter
    {
        const int nx_card = hand[i];
        const int rank = (nx_card % 13);
        
        if (rank == 0)          //Return score and Ace card
        {
            ++aCount;
            ++score;
        }
        else if (rank < 9)      //Return score plus value of new card
        {
            score = score + (rank +1);
        }
        else                    //Return score plus card with card value of 10
        {
            score = score + 10;
        }
    }
        while (aCount > 0 && score < 12)    //Set Ace card to 11
        {
            --aCount;
            score = score + 10;
        }
        return score;           //Display score of total hands
}
/******************************************************************************/
/*************************Total score******************************************/
void prAll(int H_hand[], const int H_count, int P_hand[], const int P_count)
{
    //Display house final score and hands dealt
    cout << "House hand: " << endl;
            prHand(H_hand, H_count);
    cout << "House score: " <<  scHand(H_hand, H_count) << endl;
    cout << endl;
    
    //Display players final score and hands dealt
    cout << "Players hand: " << endl; 
            prHand(P_hand, P_count);
    cout << "Players score: " << scHand(P_hand, P_count) << endl;
    cout << endl;
}