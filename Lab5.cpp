//Lab 5: CAP to accept and determine if it's a prime or composite
//Written by Oudom Bol

#include <iostream>      //preprocessor directive 
using namespace std;    //which namespace to use 
int main()              //beginning of function
{                       //beginning of a block

    int whole, i, cpr=0;      //declare var, cpr is for counting prime num factor

    cout<<"Enter a number: ";       //ask user to enter a number
    cin>>whole;                     //accept a number

    for(i=1; i<=whole; i++)         
    {
        if(whole%i==0)          //if whole/i and there's no remainder, count the number of factor
        {
            cpr++;
        }
    }

    if (cpr==2)             //if the number has ONLY 2 factors
    {
    cout<<whole<<" is a prime number!"<<endl;       //display it's a prime number 
    }

    else
    {
    cout<<whole<<" is a composite number!"<<endl;   //else display it's a composite number
    cout<<"The factors of "<<whole<<" are: ";
    for(i=1; i<=whole; i++)                     //++i: increment and then display, i++:display and then increment 
    {
        if (whole%i==0)       //if whole/i and there's no remainder, then i is a factor of that num
        cout<<i<<", ";       // ", " is to give space between the numbers
    }
    }
   
    return 0;           //return 0 back to OS
}