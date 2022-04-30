#include <iostream>
using namespace std;          //which namespace to use

//ASSUME THEY HAVEN’T TAKEN ANY RAPID TEST

//DONT HAVE INVALID INPUT YET: DONE
//no loop yet 
//more function: 
//add array
//DISPLAY: Your results: DONE

//add comments

//understood the importance of function, had to edit the code lots of time, using function really helps

//these are functions we used
char choice;
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
     cin.get();
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
     //cout << "\n Enter A to start again or X to exit the program: "; //testing
     //cin>>choice;
}

void advisor()                     //give advice on what to do at all times during the pandemic
{
     cout << "\n You are recommended to follow these steps at all times to reduce your risk of getting or spreading COVID-19: "<<endl;
     cout << " - Get COVID-19 vaccines if you haven't. "<<endl;
     cout << " - Wear a mask when you're outside. "<<endl;
     cout << " - Practice social distancing and avoid poorly ventilated spaces. "<<endl;
     cout << " - Wash your hands often with soap or use hand sanitizer. "<<endl;
}

void symptoms()                    //symptoms of covid-19
{
     cout << "\n In the last 10 days, have you experienced ANY of the symptoms listed below? "<<endl;
     cout << " - Fever "<<endl;
     cout << " - Cough/Sore throat "<<endl;
     cout << " - Fatigue "<<endl;
     cout << " - Loss of taste or smell "<<endl;
     cout << " - Difficulty breathing "<<endl;
     cout << " - Runny nose "<<endl;
     cout << " - Headache "<<endl;
}

void vaxhavesymptoms()            //for people with COVID-19 vaccine and have symptoms
{
     cout << "\n Because you have symptoms of COVID-19, you are advised to do the following: "<<endl;
     cout << " - Isolate yourself at home and take care of yourself. "<<endl;
     cout << " - Continue wearing a mask around others until you are able to get tested and receive results of COVID-19. "<<endl;
     cout << "\n PLEASE NOTE: Because some of the symptoms of flu and COVID-19 are similar, "<<endl<< "you may want to consider asking the doctor about testing or treatment for influenza."<<endl;
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
     cout << "\n Watch out for COVID-19 symptoms such as fever, cough, or difficulty breathing."<<endl;
     cout << "If you develop any of these symptoms or if you start feeling worse, visit the nearest medical center. "<<endl;
}

void contactbutnosymptoms()      //for people that made contact with an infected person but got no symptoms
{
     cout << "\n You do not need to quarantine. But you should take precautions until 10 days following close contact as follows: "<<endl;
     cout << " - Wear a well-fitting mask when you are around others. "<<endl;
     cout << " - Avoid places where you are not able to wear a mask and avoid travelling. "<<endl;
}

void notsureandnosymptoms()     //for people that are not sure they made contact with an infected person and got no symptoms
{
     cout << "\n You do not need to quarantine. But you should still take precautions as follows: "<<endl;
     cout << " - Wear a well-fitting mask when you are around others. "<<endl;
     cout << " - Avoid places where you are not able to wear a mask and avoid travelling. "<<endl;
}

void nocontactnosymptoms()    //for people that didn't make contact with an infected person and got no symptoms
{
     cout << "\n Sounds like you are feeling ok. You can stop stressing about it. "<<endl;
}

void askuserinputyn ()        //ask user to enter yes or no
{
     cout << "\n Enter Y for YES or N for NO: ";
}

void askuserinputynm ()       //ask user to enter yes, no, or not sure
{
     cout << " In the last two weeks, have you been in close contact with someone who has COVID-19? "<<endl;
     cout << " Enter Y for YES, or N for NO, or M for NOT SURE: ";   //yes, no or idk
}

void invalidin()    
{
     cout <<"\n INVALID INPUT! PLEASE ENTER THE RIGHT LETTER"<<endl;
}

void result()          
{
     cout << "\n ***** YOUR RESULT ***** "<<endl;
}

void presstocont()
{
     cout << "\n ***** PRESS ENTER TO CONTINUE ***** ";         
     cin.get();
}

//the main function
int main()
{    
//introduction();    //calling the introduction menu function

//input name into array
//display name below
 
//  char name[100];
//  cout << "\n Enter you name: ";
//  cin.get(name,100);      //to read and display an entire line entered by user, cin.get(string_name, size)
//  cout << "\n Hello "<< name << ". Please answer some questions below: "<<endl;

 char choice;
 
//  cout << "\n ***** BEFORE WE GET STARTED ***** "; 
//  advisor();                                           //calling function that gives advice 
//  presstocont();

 //Press sth to start again (loop?). Press sth to end. ?
 //If you need to start over, refresh the page and start again. ?

// while (toupper(choice) != 'X')
// {
 cout << "\n Have you taken the recommeded dose of COVID-19 vaccine? ";
 askuserinputyn();                                     //calling the function that ask user for yes or no
 cin >> choice;                                        //for user to input their choice
 
 if (toupper(choice) == 'Y')  //toupper used for turn lowercase letters into uppercase
 {
     lifethreateningsymptomsQ();           //call function: that ask user if they have life threatening symptoms
     askuserinputyn();
     cin >> choice;                         
     
     if (toupper(choice) == 'Y')  
     {
          result();                     
          lifethreateningsymptoms();      //call function: that recommends what they should do if they have life-threatening symptoms
          //testing
          return main();
     }

     else if (toupper(choice) == 'N')
     {
          cout << "\n";
          askuserinputynm ();      //call function: that ask user to enter yes, no, or not sure
          cin >> choice;

          if (toupper(choice)== 'Y')  
          {
               symptoms(); //calling the function for symptoms
               askuserinputyn();
               cin>>choice;

               if (toupper(choice) == 'Y') 
               {
                    result();
                    vaxhavesymptoms();  //call function:for people with COVID-19 vaccine and have symptoms
               }

               else if (toupper(choice) == 'N')
               {
                    result();
                    contactbutnosymptoms(); //call function:for people that made contact with an infected person but got no symptoms
               }
               
                else
               {
                    invalidin();
               }

          }
          else if (toupper(choice) == 'N')
          {
               symptoms();
               askuserinputyn();
               cin>>choice;

               if (toupper(choice) == 'Y')  
               {
                    result();
                    vaxhavesymptoms();
               }
               else if (toupper(choice) == 'N')
               {
                   result();
                   nocontactnosymptoms();  //call function:for people that didn't make contact with an infected person and got no symptoms
               }
               else
               {
                    invalidin();
               }

          }
          else if (toupper(choice) == 'M')
          {
               symptoms();
               askuserinputyn();
               cin>>choice;

               if (toupper(choice) == 'Y')  
               {
                    result();
                    vaxhavesymptoms();
               }
               else if(toupper(choice) == 'N')
               {
                    result();
                    notsureandnosymptoms();   //call function:for people that are not sure they made contact with an infected person and got no symptoms
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
     } //test below here
     // else if(toupper(choice) == 'A')
     // {
     //      break;
     // }
     // else if(toupper(choice) != 'Y' or toupper(choice) != 'N' or toupper(choice) != 'A')
     // {
     //      invalidin();
     // }
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

     if (toupper(choice) == 'Y')  
     {
          result();
          lifethreateningsymptoms();
          //advisor();
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
                    result();
                    symptoms();
                    askuserinputyn();
                    cin>>choice;

                    if (toupper(choice) == 'Y')  
                    {
                         result();
                         novaxhavesymptoms(); //call function:for people with no COVID-19 vaccine and have symptoms
                         //advisor();
                    }
                    else if (toupper(choice) == 'N')
                    {
                         result();
                         nosymptomsnovaccine(); //call function:for people with no COVID-19 vaccine and no symptoms
                         //advisor();
                    }
                    else
                    {
                         invalidin();
                    }
               }
               else if (toupper(choice) == 'N')
               {
                    symptoms();
                    askuserinputyn();
                    cin>>choice;

                    if (toupper(choice) == 'Y')  
                    {
                         result();
                         novaxhavesymptoms(); 
                         //advisor();
                    }
                     else if (toupper(choice) == 'N')
                    {
                         result();
                         nosymptomsnovaccine();
                         //advisor();
                    }
                    else
                    {
                         invalidin();
                    }
               }
               else if (toupper(choice) == 'M')
               {
                    symptoms();
                    askuserinputyn();
                    cin>>choice;

                    if (toupper(choice) == 'Y') 
                    {
                         result();
                         novaxhavesymptoms(); 
                         //advisor();
                    }
                     else if (toupper(choice) == 'N')
                    {
                         result();
                         nosymptomsnovaccine();
                         //advisor();
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

               if (toupper(choice) == 'Y')   
               {
                    result();
                    nosymptomsnovaccine();
                    //advisor();
               }
               else if (toupper(choice) == 'N')
               {
                    result();
                    cout << "\n Based on the answers given, you do not need to get tested unless recommended or required. "<<endl;
                    //advisor();
               }
               else if (toupper(choice) == 'M')
               {
                    result();
                    nosymptomsnovaccine();
                    //advisor();
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
//}



 
 //cout << "\n ***** Thank you for using this program ***** ";   //paste this everywhere
 //cout << "\n ***** Thank you "<<name<<" for using this program ***** ";


     return 0;               //send 0 back to OS

} // end of main






















