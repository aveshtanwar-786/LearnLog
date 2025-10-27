#include <iostream>
using namespace std;
main()
{
    int x, y, z, i;
    cout<<"Enter Three Number-"<<"\n";
    cin>>x>>y>>z;
    if(x>y)                                 //first if condition
    i=x;
    else                                    //first else condition
    i=y;
    if(i>z)                                 //second if condition
    cout<<"The greatest number is-"<<i;
    else
    cout<<"The greatest number is-"<<z;         //second else condition
}
