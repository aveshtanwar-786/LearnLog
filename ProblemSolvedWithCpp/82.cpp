#include<iostream>
using namespace std;
 void change(int&);
 void main( )
 {
 int a=5;
 cout<<"a="<<a<<endl;
 change(a);
 cout<<"a="<<a<<endl;
 }
 void change(int &b)
 {
 b=10;
 }