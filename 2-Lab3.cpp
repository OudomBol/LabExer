#include <iostream>
#include <cmath> //for computing mathematical function
using namespace std;


double oudom_sqrt(double num){
    double result;
    result = pow(num, 0.5); //result = num^0.5 = square root of num; squareroot of 4 = 4 to the power of 1/2
    return result;
    
}

double cubic_root(double x)
{
  double result;
  if (x>0){
    result = pow(x,1.0/3.0);
    return result;
  }
  else 
  {
    result= -(pow(-x,1.0/3.0));
    return result;
  }
}

double do_fabs(double num)  //turn from negative to positive number
{
  double abs=0;     
  if(num < 0)
  {
    abs = num - (num*2);        //-8 - (-8x2)
  }else;
  
  return abs;
}

void bunheang_round(float num)     
{
    int roundednum,result1;         
    float substract;
    roundednum = num;              
    substract = num - roundednum;
    
    if(substract >= 0.0 && substract < 0.5)
    {
        result1 = roundednum;
    }
    else if(substract >= 0.5 && substract < 1.0)
    {
        result1 = roundednum + 1;
    }
    else if(-0.5 < substract && substract <= 0.0)
    {
       
        result1 = roundednum;
    }
    else if(-1.0 < substract && substract <= -0.5)      
    {
        result1 = roundednum - 1;
    }

    cout<<"Result after rounding: "<<result1;
}







int main()
{

    // float input;
    // int result2;
    // cout<<"Enter a number: ";
    // cin>>input;
    // bunheang_round(input);
   


    double num, my_fab;

    cout << "Enter a number: ";
    cin >> num; 
    cout << "The square root of " << num << " is " << oudom_sqrt(num) <<endl;
    // cout<<"The Cubic Root of "<<num<<" is: "<<cubic_root(num) << endl;


    // cout<<endl<<"Input negative Number: ";
    // cin>>num;
    // my_fab = do_fabs(num);
    // cout<<"fabs of "<<num<<" is "<<my_fab<<endl;

    


    return 0;
}