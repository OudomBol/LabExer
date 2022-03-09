//memorise lower case,upper case and space
//CAP to accept current temp and display the messages based on the range given

#include <iostream>   //preprocessor directive
using namespace std;    //which namespace to use 
int main()              //beginning of function
{                       //beginnning of blcok
    double t;              //declare var 

    cout << "Enter temperature: ";      //ask user to enter a temp
    cin >> t;                           //to accept a temp
        
    if(t>=41 and t<=54)   //this block of code is to display diff message based on diff range of temp
    {
        cout<<"Stay hydrated! ";        //display 
    }
    else if (t>=32 and t<=40)
    {
        cout <<"Stay Cool and safe!";   //display 
    }
    else if (t>=26 and t<=31)
    {
        cout<<"Keep a sunblock handy!"; //display
    }
    else if (t>=20 and t<=25)
    {
        cout<<"Always keep your cool!"; //display
    }
    else if (t<=20)
    {
        cout <<"Cool breeze in the air!";   //display
    }
    else if (t>54)
    {
        cout<<"Out of range";               //display
    }

    return 0;       //send 0 back to 0S
}                   //end of block 