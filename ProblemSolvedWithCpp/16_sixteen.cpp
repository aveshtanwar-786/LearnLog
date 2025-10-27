#include <iostream>
using namespace std;
class student
{
private:
    char name[20];
    char standard[20];
    char subject[20];
    int DD, MM, YYYY;

public:
    void Date();
    void show_Date();
    void in_name();
    void in_standard();
    void out_standard()
    {
        cout << "\nStudent's Standard:\n\t" << standard;
    };
    void out_name()
    {
        cout << "\nStudent name:\n\t" << name;
    };
};
void student::Date()
{

    cout << "Enter Date in the format of 'DD MM YYYY': ";
    cin >> DD >> MM >> YYYY;
}
void student::show_Date()
{
    cout << "Today's Date:\n\t" << DD << " / " << MM << " / " << YYYY;
}
void student::in_name()
{
    cout << "Enter Student Name: ";
    cin >> name;
}
void student::in_standard()
{
    cout << "Enter Student Standard(in roman/in char): ";
    cin >> standard;
}
//Main Function Starts From Here 
int main()
{
    student st;
    st.Date();
    st.in_name();
    st.in_standard();
    st.show_Date();
    st.out_name();
    st.out_standard();
}