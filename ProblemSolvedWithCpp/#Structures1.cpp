#include <iostream>
using namespace std;
struct bookdetails
{
    char name[100];
    int pages;
    float price;
};

int main()
{
    struct bookdetails b;
    cout<<endl<<"Enter Name of book : "<<endl;
    cin>>b.name;
    cout<<endl<<"Enter numbers of Pages in book : "<<endl;
    cin>>b.pages;
    cout<<endl<<"Enter price of book : "<<endl;
    cin>>b.price;
    cout<<endl<<endl<<"Details : ";
    cout<<b.name<<" "<<b.pages<<" "<<b.price;
}