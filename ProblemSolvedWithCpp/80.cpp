#include <iostream>
using namespace std;
int display (int & v1, int v2=10)
{
    for (int x=1; x<=2; x++)
    {
        cout<<++v1<<'*'<<v2--<<endl;
        cout<<--v2<<'*'<<v1++<<endl;
    }
}
int main()
{
    int a=5, b=6;
    display(a);
    cout<<"The latest values are"<<a<<"and"<<b<<endl;
}