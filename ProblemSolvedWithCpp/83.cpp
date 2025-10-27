#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if (a<b)
    cout<<"The Smallest number is: "<<a;
    else
    if(b>c)
    cout<<"The Samllest number is: "<<b;
    else
    cout<<"The Smallest number is: "<<c;
}
