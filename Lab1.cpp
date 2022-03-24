//accept 3 numbers
//display sum, product, average

#include <iostream>
using namespace std;
int main ()
{
    int a;
    int b;
    int c;
    int sum;
    int product;
    int average;

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

    return 0;
}