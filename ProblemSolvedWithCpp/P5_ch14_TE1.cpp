//Write a program to dispaay the following menu and accept a choice number........must be displayed.
#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"MENU\n1.\tCreate a data file\n2.\tDisplay a data file\n3.\tEdit a data file\n4.\tExit\nChoice: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"You selected 'Create a data file'";
        break;
    case 2:
    cout<<"You selected 'Display a data file'";
    break;
    case 3:
    cout<<"You selected 'Edit a data file'";
    break;
    case 4:
    cout<<"You selected 'Exit'";
    exit(0);
    break;
    default:cout<<"error...  Enter Valid Number";
        break;
    }
}