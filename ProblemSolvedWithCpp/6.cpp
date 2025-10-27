#include <iostream>
using namespace std;
int main()
{
    string password;
    cout<<"Enter password: ";
    cin>>password;
    if (password=="m11a5t2006")
    {
        cout<<"Password Accepted...\nuser identified..";
    }
    else
    {
        cout<<"user identified..\npassword is incorrect.";
        exit(0);
    }
    cout<<"\nMy name is Avesh Tanwar.";
}