#include<iostream>
using namespace std;
main()
{
    int x, y, z, i;
    cout<<"Enter three numbers" <<"\n";
    cin>>x>>y>>z;
    if(x>y)                                 //1st if condition
    i=x;
    else                                    //1st eles condition
    i=y;
    if(i>z)                                 //2nd if condition
    cout<<"The greatest number is"<<1;
    else
    cout<<"The greatest number is"<<z;      //2nd else condition
}