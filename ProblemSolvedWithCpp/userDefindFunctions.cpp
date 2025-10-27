#include<iostream>
using namespace std;
float functionRadious(int);
int main()
{
    float radious;
    cout<<"-----: Radious Calculator :----- "<<endl;
    puts("Enter Radious : ");
    cin>>radious;
    cout<<functionRadious(radious);
    return 0;
}
float functionRadious(int r)
{
    float output = 3.141592654 * r * r;
    return(output);
}