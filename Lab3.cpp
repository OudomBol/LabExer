//read control structure
//create any program with for loop and if statement
//accept age and name
//if age is even, print name 10 times
//if age is odd, print name 5 times

//Lab 3: written by Oudom Bol

#include <iostream> //preprocessor directive
using namespace std; //which namespace to use 
int main()          //beginning of a function 
{                   //beginning of a block
   int age, i;     //declare var age and i as integer
    string name;    //declare var name
             

    cout <<"Enter age: ";       //to ask user to enter an age
    cin >> age;                 //accepting an age

    cout <<"Enter name: ";      //ask user to enter a name
    cin >> name;                //to accept a name

    if(age%2 == 0)              //to determine if an integer is even use "%" to determine remainder
        for(i=0; i<10; i++)     //to display name 10 times
    {
        cout<<name<<endl;       //to print the var name
    }
    else                        //if else
    for(i=0; i<5; i++)          //to display name 5 times
    {
        cout<<name<<endl;
    } 

    return 0;   //send 0 back to OS
}               //end of block