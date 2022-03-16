//accept a temp. in celsius
//convert it to kelvin and fahrenheit
//written by Oudom Bol
//Lab 2

#include <iostream>     //preprocessor directive

using namespace std;    //which namespace to us

int main()              //for beginning of a function

{                       //beginning of a block
    float K, F, C;      //declare variable as float. K for kelvin, C for celsius, F for fahrenheit

    cout << "Enter degrees in Celsius: ";     //to ask the user to enter a number
    cin >> C;                                 //for accepting a temp. in celsius

    K = C + 273;                              //formula for converting celsius to kelvin
    F = (1.8*C) + 32;                         //formula for converting celsius to fahrenheit 

    cout << "The value of "<<C<< " degrees C in K is: " <<K<< endl;      //print the temp. in kelvin
    cout << "The value of "<<C<< " degrees C in F is: "<<F<< endl;      //print the temp. in fahrenheit

    
    return 0;           //send 0 back to operating system
}  //end of block