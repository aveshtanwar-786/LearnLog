#include <iostream>
#include<fstream>
using namespace std;
class student 
{
    char name[30];
    int rn;
public:
    void getdata();
    void putdata();
};
void student ::getdata()
{
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter roll number: ";
    cin>>rn;
}
void student::putdata()
{
    cout<<"Student name: "<<name<<"\n";
    cout<<"Student roll number: "<<rn<<"\n";
}
void main()
{
    fstream file;
    file.open("ABC",ios::in|ios::out|ios::binary);
    student st;
    int i,n;
    cout<<"How many records to enter: ";
    cin>>n;
    for(i = 1,i <= n,i++)
    {
        st.getdata();
        file. write((char*)& st, sizeof st);
    }
    //Disaly a data file 
    file. seekg(0,ios::beg);
    while (file.read((char*)& st, sizeof st))
    {
        st.putdata();
    }
    file.clear();   //To make the end of the file marke false
    //To append record
    st.getdata();
    file. write((char*)& st, sizeof st);
    // To modify a record
    file.clear();
    cout<<"Enter record number: ";
    cin>>n;
    file.seekp((n-1)* sizeof st, ios::beg);
    st.getdata();
    file.write((char*)& st, sizeof st);
    // To close a file
    file.close();
}