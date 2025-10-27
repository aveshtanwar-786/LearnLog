#include <iostream>
using namespace std;

int c = 51;
int main()
{
    int a, b, c;
    a =10;
    cout<<"Enter the values of a: "<<a<<endl;
    // cin>>a;

    b =20;
    cout<<"Enter the values of b: "<<b<<endl;
    // cin>>b;

    c = a+b;
    cout<<"The sum of a and b is: "<<c<<endl;
    cout<<"The value of global c is: "<<::c<<endl<<endl<<endl;  // :: is the scope resulation operator used for represent the global variable to compiler.

    float d = 45.00990399398f;
    long double e = 42.437897893784798478957897598748957987587458489758938974875984l;

    cout<<"The value of d is: "<<d<<endl<<"The value of e is: "<<e<<endl;
    return 0;
    
}
