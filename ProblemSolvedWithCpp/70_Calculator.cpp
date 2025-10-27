#include<iostream>
using namespace std;
int main()
{
    int choice;
    float number1,number2;
    cout<<"\nChose any one and Enter corresponding number\n1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n5 Percentage\n6 Converter Decimal to Binary\nPlease Enter Here: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"\n------------------------Addition-----------------\nEnter the number: ";
        cin>>number1;
        cout<<"Enter, The Second number: ";
        cin>>number2;
        cout<<"Output:\n    "<<number1<<" + "<<number2<<" = "<<number1+number2;
        cout<<"\n--------------------Thank You--------------------";
        break;
    case 2:
        cout<<"\n------------------------Subtraction-----------------\nEnter the number: ";
        cin>>number1;
        cout<<"Enter, The Second number: ";
        cin>>number2;
        cout<<"Output:\n    "<<number1<<" - "<<number2<<" = "<<number1-number2;
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
    
    default:
        cout<<"Error...";
        break;
    }
    return 0;
}