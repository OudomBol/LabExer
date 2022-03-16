//accept radius of circle
//print the area and circumference
//written by Oudom Bol
//Lab 1

#include <iostream>   //preprocessor directive

using namespace std ; //which namespace to use

int main ()           //beginning of a function

{   //beginning of a block
    float r, area, circumference, pi;    //declare all variable as float since pi is 3.14
                                    
    cout << "Enter radius: ";   //ask user to enter a number
    cin >> r;                   //accept a radius

    pi = 3.14;                   //give pi value;
    area = pi*r*r ;              //give formula for area, cant use "^" 
    circumference = 2*pi*r ;     //give formula for circumference

    cout << "The area of the circle is: " <<area<< endl;                    //print area 
    cout << "The circumference of the circle is: " <<circumference<< endl;  //print circumference

    return 0;   //send 0 back to operating system
}   //end of block