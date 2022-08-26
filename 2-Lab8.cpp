#include <iostream>
#include <cmath> 
using namespace std;

double oudom_sqrt(double num){
    double result;
    result = pow(num, 0.5); //result = num^0.5 = square root of num; squareroot of 4 = 4 to the power of 1/2
    return result;
}

int main(){

    try{

        double num;
        cout << "Enter a number: "; 

        if(cin>>num)            //outer if-else to check if the input is a number or string
        {
            if (num<0)  
            throw num; 

            else
            cout << "The square root of " << num << " is " << oudom_sqrt(num) <<endl;   //function call
        }

        else if (!(cin>>num))
        throw "Please input a number";

    }

    catch(double myNum)
    {
        cout << "It is impossible to find the square root of any negative number" <<endl;
        cout <<"Error number: "<< myNum <<endl;
    }

    catch (const char* str) {
        cout << str << endl;
    }

    return 0;
}














//on exception handling

//compare bubble and selection sort, how they're implemented
//check videos

//read exception handling techniques, then implement that in the selection sort code, 
//or can use any exception handling techniques to any previous lab activities