#include<iostream>
#include<C:\Users\Studio\Desktop\My Folder\VS_Code\C++\clsCalculator.h>
#include<C:\Users\Studio\Desktop\My Folder\VS_Code\C++\classTest.h>
using namespace std;

// int Add(int FirstNumber, int SecondNumber)
// {
//     if(FirstNumber < 0 || SecondNumber < 0)
//         return 0;
    
//     int  =  + ;
    // return 
// }

// int Subrtact(int FirstNumber, int SecondNumber)
// {
//     int result = FirstNumber - SecondNumber;
//     return result;
// }

int main()
{
    int choice;
    float number1,number2;
    int decision,table;
    int decision1,table1;
    char option[1];
    cout<<"1 Addition\n";
    cout<<"2 Substraction\n";
    cout<<"3 Multiplication\n";
    cout<<"4 Division\n";
    cout<<"5 Percentage\n";
    cout<<"6 Tables of Any number\n";
    cout<<"Please Enter Here: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"\n------------------------Addition-----------------\nEnter the number: ";
        cin>>number1;
        cout<<"Enter, The Second number: ";
        cin>>number2;

        Calculator CalculatorObj;

        cout<<"Output:\n    "<<number1<<" + "<<number2<<" = "<<CalculatorObj.Add(number1,number2);

        // cout<<"Output:\n    "<<number1<<" + "<<number2<<" = "<<Add(number1,number2);
        // cout<<"Output2:\n    "<<number1<<" + "<<number2<<" = "<<Add(100,200);
        cout<<"\n--------------------Thank You--------------------";
        break;
    case 2:
        cout<<"\n------------------------Subtraction-----------------\nEnter the number: ";
        cin>>number1;
        cout<<"Enter, The Second number: ";
        cin>>number2;
        cout<<"Output:\n    "<<number1<<" - "<<number2<<" = "<<classCalculatorObj.substract(number1,number2);
        cout<<"\n--------------------Thank You--------------------";
        break;
    case 3:
        cout<<"\n------------------------Multiplication-----------------\nEnter the number: ";
        cin>>number1;
        cout<<"Enter, The Second number: ";
        cin>>number2;
        cout<<"Output:\n    "<<number1<<" x "<<number2<<" = "<<number1*number2;
        cout<<"\n--------------------Thank You--------------------";
        break;
    case 4:
        cout<<"\n------------------------Division-----------------\nEnter The Numerator: ";
        cin>>number1;
        cout<<"Enter, The Denominator: ";
        cin>>number2;
        cout<<"Output:\n    "<<number1<<" / "<<number2<<" = "<<(float)number1/number2;
        cout<<"\n--------------------Thank You--------------------";
        break;
    case 5:
        cout<<"\n------------------------Percentage-----------------\nEnter the number: ";
        cin>>number1;
        cout<<"Enter, How many percent needed: ";
        cin>>number2;
        cout<<"Your Answer Is "<<(number1*number2)/100;
        cout<<"\n--------------------Thank You--------------------";
        break;
    case 6:
        cout<<"\n--------------------Tables of Any number-----------------\n";
        cout<<"Enter the table of which number: ";
        cin>>table;
        cout<<"Enter upto which number: ";
        cin>>decision;
        for(int i = 0; i<decision;i++)
        cout<<table<<" x "<<i+1<<" = "<<(i+1)*table<<endl;
        cout<<"\n--------------------Thank You--------------------";
        break;
    default:
        cout<<"Error...";
        break;
    }
    return 0;
}
