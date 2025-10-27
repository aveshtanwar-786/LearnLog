#include<iostream>
using namespace std;

 main()
{
    int x,y,z;
    cout <<"Enter three numbers"<<"\n";
    cin >> x>> y>>z;
    if(x>y)                        
    {
        if(x>z)                    
        {cout<<"The greatest number is" <<x;}
        else                        
        {cout<<"The greatest number is" <<z;}
    }
    else                            
    {
        if(y>z)                    
        {cout<<"The greatest number is "<<y;}
        else                        
        {cout<< "The greatest number is"<<z;}
    }
}