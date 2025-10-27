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
    cout<<"Enter name of book : "<<endl;
    cin>>b.name;
    cout<<"Enter number of pages in book : "<<endl;
    cin>>b.price;
    cout<<endl<<"Enter price of book : "<<endl;
    cin>>b.price;
    cout<<endl<<"Details of book is : "<<endl;
    cout<<endl<<"book name : "<<b.name;
    cout<<endl<<"book of pages : "<<b.pages;
    cout<<endl<<"price of book : "<<b.price;
}