#include <iostream>
using namespace std;
int main()
{
    cout<<"Hi, we are here to convert Decimal to Binary.\nEnter 'four' Digit number or less than: ";
    int Entervalue;
    cin>>Entervalue;
    int number1 = Entervalue/8,number2 = number1/8,number3 = number2/8,number4 = number3/8,number5 = number4/8,number6 = number5/8,number7 = number6/8,number8 = number7/8,number9 = number8/8,number10 = number9/8,number11 = number10/8,number12 = number11/8,number13 = number12/8,number14 = number13/8;
    int Ans1 = Entervalue%8,Ans2 = number1%8,Ans3 = number2%8,Ans4 = number3%8,Ans5 = number4%8,Ans6 = number5%8,Ans7 = number6%8,Ans8 = number7%8,Ans9 = number8%8,Ans10 = number9%8,Ans11 = number10%8,Ans12 = number11%8,Ans13 = number12%8,Ans14 = number13%8;

    cout<<"The output:\n\t";
    cout<<Ans14<<Ans13<<" "<<Ans12<<Ans11<<Ans10<<" "<<Ans9<<Ans8<<Ans7<<" "<<Ans6<<Ans5<<Ans4<<" "<<Ans3<<Ans2<<Ans1;
    return 0;
}