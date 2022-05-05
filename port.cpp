#include <iostream>
using namespace std;          //which namespace to use

//these are functions used
void introduction()
{
     cout << "\n";                                         //this block of code is the introduction to the program
     cout << "      ***** WELCOME ***** ";                           
     cout << "\n   COVID SELF-CHECKING SYSTEM ";
     cout << "\n ***** PRESS ENTER TO CONTINUE ***** ";         
     cin.get();                                             //used for getting user input 

     cout << "\n";
     cout << "     ***** DISCLAIMER ***** "; 
     cout << "\n The purpose of this program is to help you make decisions about seeking appropriate medical care. "<<endl;
     cout <<" It is NOT intended for self-diagnosis or treatment of COVID-19. ";
     cout << "\n ***** PRESS ENTER TO CONTINUE ***** ";         
     cin.get(); // wait for the user input before the program can move forward
}

void advisor()                     //give advice on what to do at all times during the pandemic
{
     cout << "\n You are recommended to follow these steps at all times to reduce your risk of getting or spreading COVID-19: "<<endl;
     cout << " - Get COVID-19 vaccines if you haven't. "<<endl;
     cout << " - Wear a mask when you're outside. "<<endl;
     cout << " - Practice social distancing and avoid poorly ventilated spaces. "<<endl;
     cout << " - Wash your hands often with soap or use hand sanitizer. "<<endl;
}

void presstocont()
{
     cout << "\n ***** PRESS ENTER TO CONTINUE ***** ";         
     cin.get();
}

void askuserinputyn ()        //ask user to enter yes or no
{
     cout << "\n Enter Y for YES or N for NO: ";
}

void lifethreateningsymptomsQ()     //asking user if they have life threatening symptoms
{
     cout << "\n Do you have any of these life-threatening symptoms? "<<endl;
     cout << " - Trouble breathing "<<endl;
     cout << " - Persistent pain or pressure in the chest "<<endl;
     cout << " - Inability to wake or stay awake "<<endl;
}

void  lifethreateningsymptoms()    //recommendation if they have life-threatening symptoms
{
     cout << "\n Based on your symptoms, you may need urgent medical care.";
     cout << "\n Please visit the nearest medical center."<<endl;
}

void askuserinputynm ()       //ask user to enter yes, no, or not sure
{
     cout << " In the last two weeks, have you been in close contact with someone who has COVID-19? "<<endl;
     cout << " Enter Y for YES, or N for NO, or M for NOT SURE: ";   //yes, no or idk
}

void printSymptoms (string array[], int size) //this is for passing array to function
{
    cout << "\n In the last 10 days, have you experienced ANY of the symptoms listed below? "<<endl;
    for ( int i=0; i<size; i++)
    {
      cout << array[i] <<endl;
    }
}

void vaxhavesymptoms()            //for people with COVID-19 vaccine and have symptoms
{
     cout << "\n Because you have symptoms of COVID-19, you are advised to do the following: "<<endl;
     cout << " - Isolate yourself at home and take care of yourself. "<<endl;
     cout << " - Continue wearing a mask around others until you are able to get tested and receive results of COVID-19. "<<endl;
     cout << "\n PLEASE NOTE: Because some of the symptoms of flu and COVID-19 are similar, "<<endl<< "you may want to consider asking the doctor about testing or treatment for influenza."<<endl;
}

void contactbutnosymptoms()      //for people that made contact with an infected person but got no symptoms
{
     cout << "\n You do not need to quarantine. But you should take precautions until 10 days following close contact as follows: "<<endl;
     cout << " - Wear a well-fitting mask when you are around others. "<<endl;
     cout << " - Avoid places where you are not able to wear a mask and avoid travelling. "<<endl;
}

void invalidin()    
{
    cout << "\n";
    cout <<"\t INVALID INPUT ! PLEASE ENTER THE RIGHT LETTER THIS TIME \n";
}

void nocontactnosymptoms()    //for people that didn't make contact with an infected person and got no symptoms
{
     cout << "\n Sounds like you are feeling ok. You can stop stressing about it. "<<endl;
     cout << "But you should still wear a mask, practice social distancing and wash your hands frequently." <<endl;
}

void notsureandnosymptoms()     //for people that are not sure they made contact with an infected person and got no symptoms
{
     cout << "\n You do not need to quarantine. But you should still take precautions as follows: "<<endl;
     cout << " - Wear a well-fitting mask when you are around others. "<<endl;
     cout << " - Avoid places where you are not able to wear a mask and avoid travelling. "<<endl;
}

void novaxhavesymptoms()          //for people with no COVID-19 vaccine and have symptoms
{
     cout << "\n Because you have symptoms of COVID-19 and not vaccinated, you are advised to do the following: "<<endl;
     cout << " - Get vaccinated as soon as possible. "<<endl;
     cout << " - Isolate yourself at home and take care of yourself. "<<endl;
     cout << " - Continue wearing a mask around others until you are able to get tested and receive results of COVID-19. "<<endl;
     cout << "\n PLEASE NOTE: Because some of the symptoms of flu and COVID-19 are similar, "<<endl<< "you may want to consider asking the doctor about testing or treatment for influenza."<<endl;
}

void nosymptomsnovaccine()       //for people with no COVID-19 vaccine and no symptoms
{
     cout << "\n Because you're unvaccinated, be on the look out for COVID-19 symptoms such as fever, cough, or difficulty in breathing."<<endl;
     cout << "If you develop any of these symptoms or if you start feeling worse, visit the nearest medical center. "<<endl;
}

void result()          
{
     cout << "\n ***** YOUR RESULT ***** "<<endl;
}

//the main function
int main()
{    
 
 introduction();    //calling the introduction menu function

 cout << "\n ***** BEFORE WE GET STARTED ***** "; 
 advisor();                                           //calling function that gives advice 
 presstocont();


//start switch from here
while(1)       //infinite while loop 
{
 string sympt[7] = {" - Fever ", " - Cough/Sore throat ", " - Fatigue ", " - Loss of taste or smell ", 
                    " - Difficulty breathing ", " - Runny nose ", " - Headache "};
                    
 char choice;
 int option;

 cout << "\n ***** SELECT ONE OF THE OPTIONS BELOW ***** "; 
 cout<<"\n [1] to Start the Program \n";         //asking user to input the number 1 or 0
 cout<<" [0] to Exit the Program \n";
 cout<<"\n Your Choice: ";
 cin>>option;

 switch (option)
 {
   case 0:          //if they input 0, the program ends
   cout << "\n ***** Thank you for using this program ***** ";
   return 0;

   case 1: 
   cout << "\n Have you taken the recommeded dose of COVID-19 vaccine? ";
   askuserinputyn();                                     //calling the function that ask user for yes or no
   cin >> choice;                                        //for user to input their choice
 
 if (toupper(choice) == 'Y')  //toupper used for turn lowercase letters into uppercase
 {
     lifethreateningsymptomsQ();           //call function: that ask user if they have life threatening symptoms
     askuserinputyn();
     cin >> choice;
     cin.ignore();      //clear the previously entered choice so the cin.get() can work     
     
     if (toupper(choice) == 'Y')  
     {
          result();                     
          lifethreateningsymptoms();      //call function: that recommends what they should do if they have life-threatening symptoms
          presstocont(); 
     }

     else if (toupper(choice) == 'N')
     {
          cout << "\n";
          askuserinputynm ();      //call function: that ask user to enter yes, no, or not sure
          cin >> choice;

          if (toupper(choice)== 'Y')  
          {
               printSymptoms(sympt, 7);  //calling the array function for symptoms
               askuserinputyn();
               cin>>choice;
               cin.ignore();

               if (toupper(choice) == 'Y') 
               {
                    result();
                    vaxhavesymptoms();  //call function:for people with COVID-19 vaccine and have symptoms
                    presstocont(); //
               }

               else if (toupper(choice) == 'N')
               {
                    result();
                    contactbutnosymptoms(); //call function:for people that made contact with an infected person but got no symptoms
                    presstocont(); //
               }
               
                else
               {
                    invalidin();
               }

          }
          else if (toupper(choice) == 'N')
          {
               printSymptoms(sympt, 7);
               askuserinputyn();
               cin>>choice;
               cin.ignore();

               if (toupper(choice) == 'Y')  
               {
                    result();
                    vaxhavesymptoms();
                     presstocont();
               }
               else if (toupper(choice) == 'N')
               {
                   result();
                   nocontactnosymptoms();  //call function:for people that didn't make contact with an infected person and got no symptoms
                   presstocont();
               }
               else
               {
                    invalidin();
               }

          }
          else if (toupper(choice) == 'M')
          {
               printSymptoms(sympt, 7);
               askuserinputyn();
               cin>>choice;
               cin.ignore();

               if (toupper(choice) == 'Y')  
               {
                    result();
                    vaxhavesymptoms();
                    presstocont();
               }
               else if(toupper(choice) == 'N')
               {
                    result();
                    notsureandnosymptoms();   //call function:for people that are not sure they made contact with an infected person and got no symptoms
                    presstocont();
               }
               else
               {
                    invalidin();
               }
          }
          else
          {
               invalidin();
          }
     } 
     else
     {
          invalidin();
     }
 }

 else if (toupper(choice) == 'N')
 {
     lifethreateningsymptomsQ();
     askuserinputyn();
     cin>>choice;
     cin.ignore();

     if (toupper(choice) == 'Y')  
     {
          result();
          lifethreateningsymptoms();
          presstocont(); // heree
     }
     
     else if (toupper(choice) == 'N')
     {
          cout << "\n Are you feeling sick? ";
          askuserinputyn();
          cin>>choice;

          if (toupper(choice) == 'Y') 
          {
               cout << "\n";
               askuserinputynm ();
               cin >> choice;

               if(toupper(choice) == 'Y')   
               {
                    printSymptoms(sympt, 7);
                    askuserinputyn();
                    cin>>choice;
                     cin.ignore(); //error

                    if (toupper(choice) == 'Y')  
                    {
                         result();
                         novaxhavesymptoms(); //call function:for people with no COVID-19 vaccine and have symptoms
                          presstocont();
                    }
                    else if (toupper(choice) == 'N')
                    {
                         result();
                         nosymptomsnovaccine(); //call function:for people with no COVID-19 vaccine and no symptoms
                          presstocont();
                    }
                    else
                    {
                         invalidin();
                    }
               }
               else if (toupper(choice) == 'N')
               {
                    printSymptoms(sympt, 7);
                    askuserinputyn();
                    cin>>choice;
                      cin.ignore();

                    if (toupper(choice) == 'Y')  
                    {
                         result();
                         novaxhavesymptoms(); 
                          presstocont();
                    }
                     else if (toupper(choice) == 'N')
                    {
                         result();
                         nosymptomsnovaccine();
                          presstocont();
                    }
                    else
                    {
                         invalidin();
                    }
               }
               else if (toupper(choice) == 'M')
               {
                    printSymptoms(sympt, 7);
                    askuserinputyn();
                    cin>>choice;
                      cin.ignore();

                    if (toupper(choice) == 'Y') 
                    {
                         result();
                         novaxhavesymptoms(); 
                          presstocont();
                    }
                     else if (toupper(choice) == 'N')
                    {
                         result();
                         nosymptomsnovaccine();
                          presstocont();
                    }
                    else
                    {
                     invalidin();
                    }
               }
               else
               {
                    invalidin();
               }

          }
          else if (toupper(choice)== 'N')
          {
               cout << "\n";
               askuserinputynm ();
               cin >> choice;
                 cin.ignore();

               if (toupper(choice) == 'Y')   
               {
                    result();
                    nosymptomsnovaccine();
                     presstocont();
               }
               else if (toupper(choice) == 'N')
               {
                    result();
                    cout << "\n Based on the answers given, you do not need to get tested unless recommended or required. "<<endl;
                     presstocont();
               }
               else if (toupper(choice) == 'M')
               {
                    result();
                    nosymptomsnovaccine();
                     presstocont();
               }
               else
               {
                    invalidin();
               }
          }
          else
          {
               invalidin();
          }
     }
     else 
     {
          invalidin();
     }
 }
 else 
{
     invalidin();
}

 break; 

 default:
 cout << "\n";
 cout <<"\t INVALID INPUT ! PLEASE ENTER THE RIGHT NUMBER \n";

 } //end of switch

}  //end of while loop

     return 0;               //send 0 back to OS

} // end of main






















