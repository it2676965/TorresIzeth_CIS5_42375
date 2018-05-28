/* 
 * File:   Project2_BlackJack.cpp
 * Author: Izeth Torres
 *
 * Created on May 27, 2018, 1:49 PM
 */

#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <cmath>

using namespace std;

const int values = 13;
const int suits = 4;

int shuffleCard(int[], int[]);
char dealCard();
bool playGame();

main ()
{
    //Assign 2-D array for deck of cards
    int deck[suits][values] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 11},
                       {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 11},
                       {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 11},
                       {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 11}};
    
    
    //Welcome message
    cout << "Welcome to Blackjack\n"
            "----------------------------------------------------\n"
            "Try to beat the dealer by scoring higher than them, \n"
            "but not scoring higher than 21\n"
            "----------------------------------------------------\n";
    shuffleCard();
           
    return 0;
}
/******************************************************************************/
/*************************Definition of shuffleCard****************************/
int shuffleCard(int deck[suits], int deck[values])
{
    for(int i = 0; i < suits; i++)
    {
        for(int j = 0; j < values; j++)
        {
            shuffleCards[i][j] = 52;
        }
    }
}
    
