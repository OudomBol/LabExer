#include <iostream>
#include <cstring> //contain the null character at the end, which is the end of string
using namespace std;

//input a string
//output number of uppercase, lowercase, digits, and other characters

int main()
{

    string mystr;
    int ctrlow = 0, ctrupp = 0, ctrdig = 0, ctrothers = 0;

    cout << "enter a string: ";
    getline(cin, mystr);   //getline(): use to get string that have space 

    for (int i=mystr.size()-1; i>=0; i--)  //we need to access each character to determine if they're uppercase, lowercase, etc 
    {
        if(int(mystr[i]) >= 97 && int(mystr[i]) <= 122)
            ctrlow++;
        else if(int(mystr[i]) >= 65 && int(mystr[i]) <= 90)
            ctrupp++;
        else if(int(mystr[i]) >= 48 && int(mystr[i]) <= 57)
            ctrdig++;
        else if(int(mystr[i]) >= 32 && int(mystr[i]) <= 47)
            ctrothers++;
    }

    cout << "lowercase: " << ctrlow <<endl;
    cout << "uppercase: " << ctrupp <<endl;
    cout << "digits: " << ctrdig <<endl;
    cout << "others: " << ctrothers <<endl;

    return 0;
}
