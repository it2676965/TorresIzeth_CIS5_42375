//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    int y = 0;
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape
    for (unsigned short line =0; line <= x-- +1; line++ )
    {
        //Forward slash
        for (unsigned short f =0; f<= line; f++)
            cout << " ";
            cout << x << endl;
        //Backward slash     
        for (y= (x-line) *2; y>1; y--)
            cout<< " ";
            cout <<x << endl;
    }

    
    //Exit
    return 0;
}

