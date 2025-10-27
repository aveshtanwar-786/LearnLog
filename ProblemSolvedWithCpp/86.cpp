#include<iostream>
using namespace std;
int main()
{
   int a, b, c, i;
   cout<<"Enter the three number: ";
   cin>>a>>b>>c;
   if(a<b)
   {i=a;}
   else if(b<c)
   {i=b;}
   else {i=c;}
   cout<<i;
}