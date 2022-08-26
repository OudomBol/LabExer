
#include <iostream>
#include <cstring>
#include <cctype> //for classifying character
using namespace std;

//user defined
//input string
//convert lower to upper and vice versa, reverse the string input

char oudom_isupper(char c)
{
    if (c>= 'A' && c<='Z')
    {
        return 1;   //return 1 meaning true
    }
    else return 0;  //return 0 meaning false
}

char oudom_islower(char c)
{
    if (c>= 'a' && c<='z')
    {
        return 1;
    }
    else return 0;
}

char oudom_tolower(char str)
{
    if (str>= 'A' && str<= 'Z'){
        str += 32;          //+32 to get to the lowercase char
    }
    return str;
}

char oudom_toupper(char str)        
{
   if (str>= 'a' && str<= 'z'){
        str -= 32;          //-32 to get to uppercase char
    }
    return str;
}

void oudom_reverse(string str)
{   
    string new_str=" ";      //newstring to store the reversed
    for(int j=str.size()-1; j>=0; j--)  //access each character and copy that char into a new string to get the reversed
    {
        new_str += str[j];              
    }
    cout << "The reverse of the string: " << new_str ;
}

int main()
{
    string str, ogstr;

    cout << "enter a string: ";
    getline(cin, str);

    ogstr = str;        //store input string to another var because str value will be changed

    for(int i=str.size()-1; i>=0; i--)   //check character of string one by one 
    {
        if(oudom_isupper(int(str[i])))
        {
            str[i] = oudom_tolower(str[i]);  //copy the new lower case into the orignal
        }
        else if (oudom_islower(int(str[i])))
        {
            str[i] = oudom_toupper(str[i]); //copy the new upper case into the original
        }
    }
    cout << "Converted Case: " << str <<endl;
    oudom_reverse(ogstr); 
    
    return 0;
}