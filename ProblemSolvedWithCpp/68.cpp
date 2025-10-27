// Example 1 Program to get and display Student data
#include <iostream>
using namespace std;
class student
{
private :
    char name [ 80 ];
    int rn;
    float marks;
public :
    void getdata ();
    void putdata ();
};
void student :: getdata()
{
    cin>>name>>rn>>marks;
}
void student ::putdata()
{
    cout<<name<<rn<<marks;
}
int main()
{
    student st;
    st.getdata ();
    st.putdata ();
}
