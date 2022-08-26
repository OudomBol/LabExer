#include <iostream>
#include <ctime> //work with date and time
#include <string> //for string handling
#include <iomanip> //used to manipulate output
using namespace std;

#define MAX 100     //dont know how many course user will input so define alot 
struct course 
{
    string ccode;
    string ctitle;
    double grade;
    string remark;
}my_course[MAX];        


int main()
{
    char choice; 
    double sum = 0;
    double avg;
    int ctr = 0;

    do{

        cout << "Enter the following data: " <<endl;
        cout << "\t Course Code: ";
        getline(cin, my_course[ctr].ccode);                   //my_course[0].ccode                    
        cout << "\t Course Title: ";
        getline(cin, my_course[ctr].ctitle);
        cout << "\t Grade: ";
        cin >> my_course[ctr].grade;

         if(my_course[ctr].grade>=75)
        {
            my_course[ctr].remark = "Passed";
        }
        else my_course[ctr].remark = "Failed";

    
        ctr += 1;           //use to count how many course user has input, also helps in findign average

        cout << "\n Do you want to add more courses? (Y/N)";
        cin >> choice;
        cout << endl;

        cin.ignore();   
    }
    while (toupper(choice)!='N');

    cout << left;                              //setting up the heading of table 
    cout << setw(15) << "Course Code";
    cout << setw(35) << "Course Title";
    cout << setw(10) << "Grade";
    cout << setw(15) << "Remarks";
    cout << endl;

    for(int i=0; i<67; i++)                   
    {   
        cout << "-";
    }
    cout << endl;
    
    for(int i=0; i<ctr; i++)                //output 
    {
        // if(my_course[i].grade>=75)
        // {
        //     my_course[i].remark = "Passed";
        // }
        // else my_course[i].remark = "Failed";

        cout << left;                               //setting table for output
        cout << setw(15) << my_course[i].ccode;
        cout << setw(35) << my_course[i].ctitle;
        cout << setw(10) << my_course[i].grade;
        cout << setw(15) << my_course[i].remark ;
        cout << endl;

        sum += my_course[i].grade;                //find the sum 
    }

    avg = sum/ctr;                               //to get average

    cout << "\n GENERAL AVERAGE: " << avg;
    cout << "\n CURRENT SYSTEM DATE AND TIME: "; //to display date/time
    
    time_t ct = time(0);
    string currenttime = ctime(&ct);
    cout << currenttime;

    //or we can use
    //cout << "\n CURRENT SYSTEM DATE AND TIME: "<<__DATE__<<" "<<__TIME__;
    
    
    return 0;
}

