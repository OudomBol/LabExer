#include <iostream>
using namespace std;

//input character or number
//output its ascii value, A-Z, a-z, 0-9
//int('A') to get ascii

int bol_function(char a)
{
    if (a>='A' && a<='Z')
        return 1;
    else if (a>='a' && a<='z')
        return 1;
    else if (a>='0' && a<='9')
        return 1;
    else 
        return 0;
}


int main(){

    char a;

    cout << "Enter a character: ";
    cin >> a;

    if(bol_function(a))
        cout << "The ASCII Value of " << a << " is " << int(a);

    return 0;
}