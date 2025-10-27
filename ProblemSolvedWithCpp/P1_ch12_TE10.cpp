//Write a Program that will find out the square of a given number.
#include<iostream>
using namespace std;
class Squares
{
    int Input;
    public:
    int getnumber()
    {
        cout<<"Enter the number: ";
        cin>>Input;
    };
    int putnumber()
    {
        cout<<"The Square of a given number("<<Input<<") is "<<Input*Input;
    };
};
int main()
{
    Squares sql;
    sql.getnumber();
    sql.putnumber();
}