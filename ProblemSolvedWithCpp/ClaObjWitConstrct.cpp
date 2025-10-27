#include <iostream>
using namespace std;
class student
{
private:
    char name[80];
    int rn;
    float marks;

public:
    int getdata();
    int putdata();
};
int student::getdata()
{
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the roll no.: ";
    cin >> rn;
    cout << "Enter the marks scored by student: ";
    cin >> marks;
}
int student::putdata()
{
    cout << "\nStudent Name: " << name << "\nStudent Roll No.: " << rn << "\nStudent marks: " << marks;
}
int main()
{
    student st;
    st.getdata();
    st.putdata();
}