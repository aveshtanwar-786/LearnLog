#include <iostream>
using namespace std;
int main()
{
    char name[80];
    int first_number,second_number ;
    cout<<"Hello, I am Calculator. I am robot."<<"\n";
    cout<<"Here we are Adding Two numbers with each other. First, let me know your name..."<<"\n";
    cout<<"Enter your name - ";
    cin>>name;
    cout<<"\n"<<"Hello, "<<name<<"\n"<<" please enter the first number - ";
    cin>>first_number;
    cout<<"\n"<<"Now, Enter the second number - ";
    cin>>second_number;
    cout<<"Hey, "<<name<<" your answer is "<<first_number+second_number<<"\n"<<" ";
    
}