#include <iostream>
using namespace std;
int main()
{
    int x,y,temporary_location;
    cout<<"Enter the values: ";
    cin>>x>>y;    
    temporary_location = x;
    x = y;
    y = temporary_location;
    cout<<"the exchanged value are: "<<x<<y;
}