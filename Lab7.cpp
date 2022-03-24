//switch in switch for submenu
//toupper, convert everything to uppercase
//combination of all lab exer
//go back to main menu when pressed B

//written by Oudom Bol



#include <iostream>
using namespace std;
int main ()
{
   for(;;)          //infinite loop, how to use dowhile for this?
   
    {
    cout<<"\n MAIN MENU: Select Laboratory Activity \n";
    cout<<"\t [1] On Arithmetic Operators and Keyboard Input \n";
    cout<<"\t [2] On Arithmetic Operators \n";
    cout<<"\t [3] On Accpeting Name and Age \n";
    cout<<"\t [4] On Accepting temperature and displaying message based on range given \n";
    cout<<"\t [5] On Prime and Composite numbers \n";
    cout<<"\t [6] On Exam scores \n";
    cout<<"\t [7] On Switch Statements \n";
    cout<<"\t [X] Exit \n";  
    cout<<"\n Your Choice: ";

    char z;
    cin >> z;

    switch (toupper(z))     //to convert any char into upper case
    {
        case '1':        // use '' because var was declared as char
        int a,b,c,sum,product,average;

        cout<<"This program is to accept 3 numbers and display the sum, product and average of those 3 numbers. \n";

        cout << "Enter First Number: ";
        cin >> a;
        cout << "Enter Second Number: ";
        cin >> b;
        cout << "Enter Thirt Number: ";
        cin >> c;

        sum = a+b+c;
        product = a*b*c;
        average = (a+b+c)/3;

        cout <<"The sum of "<<a<<", "<<b<<", and "<<c<<" is "<<sum<<"."<<endl;
        cout <<"The product of "<<a<<", "<<b<<", and "<<c<<" is "<<product<<"."<<endl;
        cout <<"The average of "<<a<<", "<<b<<", and "<<c<<" is "<<average<<"."<<endl;
            
        break;          //to stop execution of the code

       
        case '2': 
        {
            for(;;){       
        cout<<"SELECT PROGRAMS \n";
        cout<<"\t [1] Circumference and Area \n";
        cout<<"\t [2] Temperature Conversion \n";
        cout<<"\t [B] Go back to the main menu \n";
        cout<<"\n Your Choice: ";
        cin>>z;
    
            switch(toupper(z)){             //nested switch
            
            case '1':
            float r, area, circumference, pi;    //declare all variable as float since pi is 3.14

            cout<<" This program is about accepting a radius of a circle and printing its area and circumference. \n";
            cout << "Enter radius: ";    //ask user to enter a number
            cin >> r;                   //accept a radius

            pi = 3.14;                  //give pi value;
            area = pi*r*r ;              //give formula for area, cant use "^" 
            circumference = 2*pi*r ;     //give formula for circumference

            cout << "The area of the circle is: " <<area<< endl;                   //print area  
            cout << "The circumference of the circle is: " <<circumference<< endl;  //print circumference
            break;

            case '2': 
            float K, Fa, Ce;     
            cout <<"This program is about accepting a temperature in celsius and converting it to fahrenheit and kelvin. \n";
            cout << "Enter degrees in Celsius: ";    //ask user to enter a number 
            cin >> Ce;                                //accept a temp in celsius    

            K = Ce + 273;                             //formula for converting celsius to kelvin               
            Fa = (1.8*Ce) + 32;                       //formula for converting celsius to fahrenheit 

            cout << "The value of "<<Ce<< " degrees C in K is: " <<K<< endl;      //print the temp in kelvin
            cout << "The value of "<<Ce<< " degrees C in F is: "<<Fa<< endl;      //print the temp in fahrenheit
            break;
        
            case 'b':
            break;
            }
         }
        
        }
        break;
        case '3': 
        {
        int age, i;     //declare var age and i as integer
        string name;

            cout<<"This program is about accepting an age and name and printing the name N amount of time according to if the age is odd or even. \n";
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
        }
            break;

        case '4':
        double t;              //declare var 

        cout<<"This program is about accepting current temperature and displaying the messages based on the range given \n";
        cout << "Enter temperature: ";      //ask user to enter a temp
        cin >> t;                           //to accept a temp
            
        if(t>=41 and t<=54)  // //this block of code is to display diff message based on diff range of temp
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
        else if (t>20 and t<=25)
        {
            cout<<"Always keep your cool!"; //display
        }
        else if (t<=20)
        {
            cout <<"Cool breeze in the air!";   //display
        }
        else 
        {
            cout<<"Out of range";               //validation
        }
            break; 

       case '5':
        {
        int whole, p, cpr=0;      //declare var, cpr is for counting prime num factor

        cout<<"This program is to accept a number and determine if it's prime or composite. \n";
        cout<<"Enter a number: ";       //ask user to enter a number
        cin>>whole;                     //accept a number

        for(p=1; p<=whole; p++)         
        {
            if(whole%p==0)          //if whole/i and there's no remainder, count the number of factor
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
        for(p=1; p<=whole; p++)                     //++i: increment and then display, i++:display and then increment 
        {
            if (whole%p==0)       //if whole/i and there's no remainder, then i is a factor of that num
            cout<<p<<", ";       // ", " is to give space between the numbers
        }
        }
        }
            break;

        case '6':
        {
        int num,total;      //declare var and initialize value
        int A = 0;                 
        int B = 0;           
        int C = 0;              
        int D = 0;               
        int F = 0;             

        cout<<"This program is to read a list of exam scores and display the total number of grades \n";      
        cout<<"Enter Exam scores: ";  //ask user to input
        while(cin>>num){              //to accept num and as long as user input num within range it will keep executing                 
            
            if(num<0){              //sentinel value, if you want to code to stop executing enter any negative number
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
        break;
        }

        case '7':
        break;

        case 'X':
        return 0;       //to stop looping when the user enter x

        default:
        cout<<"\t Invalid Input";
        }
    }

    return 0; 
} 