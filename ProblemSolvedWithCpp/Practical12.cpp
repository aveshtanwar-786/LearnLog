#include <iostream>
using namespace std;
void CALCULATE(int)
{
    int argument;
    cout << "Enter the value: ";
    cin >> argument;
    if (argument % 2 == 0)
    {
        cout << "the argument being passed is even....";
    }
    else
    {
        cout << "the argument being passed is odd....";
    }
}
int CALCULATE(int,int )
{
    int number1=1344,number2=2009;
    int argument=number1+number2;
    cout<<"The sum of two numbers being passed as argument is: "<<argument;
}
void CALCULATE()
{
    cout<<"'YOU ARE DOING GREAT....'";
}