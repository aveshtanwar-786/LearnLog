#include <iostream>
using namespace std;
int add(int number1, int number2)
{
    int result = number1 + number2;
    return result;
}
int substract(int number1, int number2)
{
    int result = number1 - number2;
    return result;
}
int Division(int number1, int number2)
{
    int result = number1 / number2;
    return result;
}
int Multiplication(int number1, int number2)
{
    int result = number1 * number2;
    return result;
}
int main()
{

    int number1, number2;
    cout << "Enter two number for Addition: ";
    cin >> number1 >> number2;
    cout << add(number1, number2);
    cout<<"\nEnter two number for substraction: ";
    cin>>number1>>number2;
    cout<<substract(number1,number2);
    cout<<"\nEnter two number for Multiplication: ";
    cin>>number1>>number2;
    cout<<Multiplication(number1,number2);

}