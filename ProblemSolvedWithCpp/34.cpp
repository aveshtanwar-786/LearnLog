#include<iostream>
using namespace std;
 main()
{
    char ch;
    cout<<"Enter a character"<<"\n";
    cin>>ch;
    switch (ch)
    {
    case 'A' :
    case 'a' :  cout<<"it is a vowel";
                break;
    case 'E' :
    case 'e' :  cout<<"it is a vowel ";
                break;
    case 'O' :
    case 'o' :  cout<<"it is a vowel";
                break;
    case 'I' :
    case 'i' :  cout<<"it is a vowel";
                break;
    case 'U' :
    case 'u' :  cout<<"it is a vowel";
                break;
    default  : cout<<"it is not a vowel";
    }
}