#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

//use structure
//input: firstname, lastname, birthdate, major(1-CS, 2-MIS, 3-BUS) in int, and studentID
//(Y/N) if yes add more if no exit
//output: concatenated name, birthdate, age(systemdate-birthyear), major in corresponding major, studentID to a .csv file
//WRITTEN BY: Oudom Bol

#define MAX 100

struct info
{
    string fname, lname, fullname, major;
    int month, day, year, age, majornum, id;

}student_info[MAX];


int main()
{
    int ctr=0;
    char choice;

    struct tm date = {0};

    do{

        cout << "Enter first name: ";
        getline(cin, student_info[ctr].fname);
        cout << "Enter last name: ";
        getline(cin, student_info[ctr].lname);

        cout << "Enter birthmonth: ";
        cin >> student_info[ctr].month;
        cout << "Enter birthday: ";
        cin >> student_info[ctr].day;
        cout << "Enter birthyear: ";
        cin >> student_info[ctr].year;

        date.tm_year = student_info[ctr].year-1900;                //to calculate age
        date.tm_mon  = student_info[ctr].month-1;
        date.tm_mday = student_info[ctr].day;
        time_t normal = mktime(&date);
        time_t current;
        time(&current);                                           
        student_info[ctr].age = (difftime(current, normal) + 86400L/2) / 86400L;

        cout << "Enter major (1-CS, 2-MIS, 3-BUS): ";
        cin >> student_info[ctr].majornum;
        cout << "Enter studentID: ";
        cin >> student_info[ctr].id;

        ctr += 1;

        cout << "\n Do you want to add more courses? (Y/N)";
        cin >> choice;
        cout << endl;

        cin.ignore();
    }
    while (toupper(choice)!='N');

    ofstream file;          //creating file
    file.open("studentinfo.csv"); //open file 
    
    //output to file
    for(int i=0; i<ctr; i++)
    {
        //for concatenated name
        file << student_info[i].fname << " " << student_info[i].lname << ", ";
       
        //for birthdate
        file << student_info[i].day <<"/"<<student_info[i].month<<"/"<<student_info[i].year<< ", ";
       
        //age
        file << student_info[i].age/365 << ", ";

        if(student_info[i].majornum == 1)     //output corresponding major
        {
            student_info[i].major = "CS";
        }
        else if(student_info[i].majornum == 2)
        {
             student_info[i].major = "MIS";
    
        }
         else if(student_info[i].majornum == 3)
        {
             student_info[i].major = "BUS";
           
        }

        file << student_info[i].major << ", ";
        file << student_info[i].id;
        file << endl;
        
    }

    file.close();  //close the file, good practice

    return 0;
}
