#include <iostream>
using namespace std;
int main()
{
    int radius;
    float pi= 3.14;
    cout<<"Enter Radius: ";
    cin>>radius;                //cout<<"pir2, i2pir"
    cout<<"Area of the Circle With Radius "<<radius<<" is "<<pi*radius*radius;
    cout<<"\nPerimeter of Circle with radius "<<radius<<" is "<<2*pi*radius;
}