// This program was created by Mohd. Avesh Tanwar.
#include <iostream>
using namespace std;
int main()
{
    cout<<"\nEnter Four Digit or less than, in Decimal for And Get output in Binary, Octal, Hexadecimal.\nEnter Here:";
    int Entervalue;
    cin>>Entervalue;
    int number1 = Entervalue/2,number2 = number1/2,number3 = number2/2,number4 = number3/2,number5 = number4/2,number6 = number5/2,number7 = number6/2,number8 = number7/2,number9 = number8/2,number10 = number9/2,number11 = number10/2,number12 = number11/2,number13 = number12/2,number14 = number13/2;
    int Ans1 = Entervalue%2;
    int Ans2 = number1%2;
    int Ans3 = number2%2;
    int Ans4 = number3%2;
    int Ans5 = number4%2;
    int Ans6 = number5%2;
    int Ans7 = number6%2;
    int Ans8 = number7%2;
    int Ans9 = number8%2;
    int Ans10 = number9%2;
    int Ans11 = number10%2;
    int Ans12 = number11%2;
    int Ans13 = number12%2;
    int Ans14 = number13%2;
    cout<<"The output:\n\t\tBinary:\t";
    cout<<Ans14;
    cout<<Ans13;
    cout<<" ";
    cout<<Ans12;
    cout<<Ans11;
    cout<<Ans10;
    cout<<Ans9;
    cout<<" ";
    cout<<Ans8;
    cout<<Ans7;
    cout<<Ans6;
    cout<<Ans5;
    cout<<" ";
    cout<<Ans4;
    cout<<Ans3;
    cout<<Ans2;
    cout<<Ans1;
    //decimal to octal
    int number_octal_1 = Entervalue/8;
    int number_octal_2 = number_octal_1/8;
    int number_octal_3 = number_octal_2/8;
    int number_octal_4 = number_octal_3/8;
    int number_octal_5 = number_octal_4/8;
    int number_octal_6 = number_octal_5/8;
    int number_octal_7 = number_octal_6/8;
    int number_octal_8 = number_octal_7/8;
    int number_octal_9 = number_octal_8/8;
    int number_octal_10 = number_octal_9/8;
    int number_octal_11 = number_octal_10/8;
    int number_octal_12 = number_octal_11/8;
    int number_octal_13 = number_octal_12/8;
    int number_octal_14 = number_octal_13/8;
    int Ans_octal_1 = Entervalue%8;
    int Ans_octal_2 = number_octal_1%8;
    int Ans_octal_3 = number_octal_2%8;
    int Ans_octal_4 = number_octal_3%8;
    int Ans_octal_5 = number_octal_4%8;
    int Ans_octal_6 = number_octal_5%8;
    int Ans_octal_7 = number_octal_6%8;
    int Ans_octal_8 = number_octal_7%8;
    int Ans_octal_9 = number_octal_8%8;
    int Ans_octal_10 = number_octal_9%8; 
    int Ans_octal_11 = number_octal_10%8;
    int Ans_octal_12 = number_octal_11%8;
    int Ans_octal_13 = number_octal_12%8;
    int Ans_octal_14 = number_octal_13%8;
    cout<<"\n\t\t Octal: ";
    cout<<Ans_octal_6;
    cout<<Ans_octal_5;
    cout<<Ans_octal_4;
    cout<<" ";
    cout<<Ans_octal_3;
    cout<<Ans_octal_2;
    cout<<Ans_octal_1;
    //decimal to hexadecimal
    int NUMBER1 = Entervalue/16;
    int NUMBER2 = NUMBER1/16;
    int NUMBER3 = NUMBER2/16;
    int NUMBER4 = NUMBER3/16;
    int NUMBER5 = NUMBER4/16;
    int NUMBER6 = NUMBER5/16;
    int NUMBER7 = NUMBER6/16;
    int NUMBER8 = NUMBER7/16;
    int NUMBER9 = NUMBER8/16;
    int NUMBER10 = NUMBER9/16;
    int NUMBER11 = NUMBER10/16;
    int NUMBER12 = NUMBER11/16;
    int NUMBER13 = NUMBER12/16;
    int NUMBER14 = NUMBER13/16;
    int A1 = Entervalue%16;
    int A2 = NUMBER1%16;
    int A3 = NUMBER2%16;
    int A4 = NUMBER3%16;
    int A5 = NUMBER4%16;
    int A6 = NUMBER5%16;
    int A7 = NUMBER6%16;
    int A8 = NUMBER7%16;
    int A9 = NUMBER8%16;
    int A10 = NUMBER9%16;
    int A11 = NUMBER10%16;
    int A12 = NUMBER11%16;
    int A13 = NUMBER12%16;
    int A14 = NUMBER13%16;
    cout<<"\n\t   Hexadecimal:\t";
    switch (A5)
    {
    case 10:
        cout<<"A";
        break;
    case 11:
        cout<<"B";
        break;
    case 12:
        cout<<"C";
        break;
    case 13:
        cout<<"D";
        break;
    case 14:
        cout<<"E";
        break;
    case 15:
        cout<<"F";
    default:
        cout<<A5;
        break;
    }
    switch (A4)
    {
    case 10:
        cout<<"A";
        break;
    case 11:
        cout<<"B";
        break;
    case 12:
        cout<<"C";
        break;
    case 13:
        cout<<"D";
        break;
    case 14:
        cout<<"E";
        break;
    case 15:
        cout<<"F";
    default:
        cout<<A4;
        break;
    }
    switch (A3)
    {
    case 10:
        cout<<"A";
        break;
    case 11:
        cout<<"B";
        break;
    case 12:
        cout<<"C";
        break;
    case 13:
        cout<<"D";
        break;
    case 14:
        cout<<"E";
        break;
    case 15:
        cout<<"F";
    default:
        cout<<A3;
        break;
    }
    switch (A2)
    {
    case 10:
        cout<<"A";
        break;
    case 11:
        cout<<"B";
        break;
    case 12:
        cout<<"C";
        break;
    case 13:
        cout<<"D";
        break;
    case 14:
        cout<<"E";
        break;
    case 15:
        cout<<"F";
    default:
        cout<<A2;
        break;
    }
    switch (A1)
    {
    case 10:
        cout<<"A";
        break;
    case 11:
        cout<<"B";
        break;
    case 12:
        cout<<"C";
        break;
    case 13:
        cout<<"D";
        break;
    case 14:
        cout<<"E";
        break;
    case 15:
        cout<<"F";
    default:
        cout<<A1;
        break;
    }
}