#include <iostream>
using namespace std;
int main()
{
    int Entervalue;
        cout<<"Enter Decimal Number: ";
        cin>>Entervalue;
        int NUMBER1 = Entervalue/16;
        int NUMBER2 = NUMBER1/16;
        int NUMBER3 = NUMBER2/16;
        int NUMBER4 = NUMBER3/16;
        int NUMBER5 = NUMBER4/16;
        int NUMBER6 = NUMBER5/16;
        int NUMBER7 = NUMBER6/16;
        int NUMBER8 = NUMBER7/16;
        int NUMBER9 = NUMBER8/16;
        int NUMBER10 = NUMBER9/16;
        int NUMBER11 = NUMBER10/16;
        int NUMBER12 = NUMBER11/16;
        int NUMBER13 = NUMBER12/16;
        int NUMBER14 = NUMBER13/16;
        int A1 = Entervalue%16;
        int A2 = NUMBER1%16;
        int A3 = NUMBER2%16;
        int A4 = NUMBER3%16;
        int A5 = NUMBER4%16;
        int A6 = NUMBER5%16;
        int A7 = NUMBER6%16;
        int A8 = NUMBER7%16;
        int A9 = NUMBER8%16;
        int A10 = NUMBER9%16;
        int A11 = NUMBER10%16;
        int A12 = NUMBER11%16;
        int A13 = NUMBER12%16;
        int A14 = NUMBER13%16;
        cout<<"The Decimal Number '"<<Entervalue<<"' into Hexadecimal Number: ";
    switch (A5)
    {
    case 10:
        cout<<"A";
        break;
    case 11:
        cout<<"B";
        break;
    case 12:
        cout<<"C";
        break;
    case 13:
        cout<<"D";
        break;
    case 14:
        cout<<"E";
        break;
    case 15:
        cout<<"F";
    default:
        {
            if(A5 != 10,11,12,13,14,15)
            {
                cout<<A5;
            }
        }
        break;
    }
    switch (A4)
    {
    case 10:
        cout<<"A";
        break;
    case 11:
        cout<<"B";
        break;
    case 12:
        cout<<"C";
        break;
    case 13:
        cout<<"D";
        break;
    case 14:
        cout<<"E";
        break;
    case 15:
        cout<<"F";
    default:
        if(A4 != 10,11,12,13,14,15)
            {
                cout<<A4;
            }
            break;
    }
    switch (A3)
    {
    case 10:
        cout<<"A";
        break;
    case 11:
        cout<<"B";
        break;
    case 12:
        cout<<"C";
        break;
    case 13:
        cout<<"D";
        break;
    case 14:
        cout<<"E";
        break;
    case 15:
        cout<<"F";
    default:
        if(A3 != 10,11,12,13,14,15)
            {
                cout<<A3;
            }
        break;
    }
    switch (A2)
    {
    case 10:
        cout<<"A";
        break;
    case 11:
        cout<<"B";
        break;
    case 12:
        cout<<"C";
        break;
    case 13:
        cout<<"D";
        break;
    case 14:
        cout<<"E";
        break;
    case 15:
        cout<<"F";
    default:
        if(A2 != 10,11,12,13,14,15)
            {
                cout<<A2;
            }
        break;
    }
    switch (A1)
    {
    case 10:
        cout<<"A";
        break;
    case 11:
        cout<<"B";
        break;
    case 12:
        cout<<"C";
        break;
    case 13:
        cout<<"D";
        break;
    case 14:
        cout<<"E";
        break;
    case 15:
        cout<<"F";
    default:
        if(A1 != 10,11,12,13,14,15)
            {
                cout<<A1;
            }
        break;
    }
}