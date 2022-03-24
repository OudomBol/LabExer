//90-100=A, 80-89=B, 70-79=C, 60-69=D, 0-59=F
//if input >100, out of range 
//while or do while 
//Written By: Oudom Bol

#include <iostream> //preprocessor directive
using namespace std;    //which namespace to use 
int main()              //beginning of a function
{                       //beginning of a block
    
    int num,total;      //declare var and initialize value
    int A = 0;                 
    int B = 0;           
    int C = 0;              
    int D = 0;               
    int F = 0;                   
    cout<<"Enter Exam scores: ";  //ask user to input
    while(cin>>num){              //to accept num and as long as user input num within range it will keep executing                 
        
        if(num<0){              //sentinel value,if you want to code to stop executing enter any negative number
            break;
        }                       
        else if(num>=90 and num<=100) {
            A += 1;             // to perform A=A+1 if the num if within range
        }
        else if(num>=80 and num<=89){
            B += 1;
        }
        else if(num>=70 and num<=79){
            C += 1;
        }
        else if(num>=60 and num<=69){
            D += 1;
        }
        else if(num>=0 and num<=59) {
            F += 1;
        }

    }                             
    total = A + B + C + D + F;              //find total number of scores
    
    cout<<"Number of A's:   "<<A<<endl;     //to display according to test case
    cout<<"Number of B's:   "<<B<<endl;  
    cout<<"Number of C's:   "<<C<<endl;   
    cout<<"Number of D's:   "<<D<<endl;  
    cout<<"Number of F's:   "<<F<<endl;  
    cout<<"Total Number of Scores: "<<total<<endl;

    return 0; //send 0 back to OS
}              //end of blcok