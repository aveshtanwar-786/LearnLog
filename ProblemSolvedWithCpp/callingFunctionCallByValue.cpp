#include <iostream>
using namespace std;
int swap();
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<b<<"\n";
}
int swap(int c,int d)
{
    int t;
    t = c;
    c = d;
    ;
    d = t;
    cout<<c<<d<<"\n";
    return c;
}