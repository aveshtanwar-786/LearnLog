#include <iostream>
using namespace std;
int main()
{
    int N, number, sum;
    cin>>N;
    sum= 0;
    number=1;
    do
    {
        sum+=number;
        number++;
    } while (number<=N);
    cout<<sum;

}