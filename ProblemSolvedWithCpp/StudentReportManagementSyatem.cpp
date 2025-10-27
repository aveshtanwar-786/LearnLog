#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
// the class that score data
class student
{
    int rollno;
    char name[50];
    int eng_marks, math_marks, sci_marks, lang2_marks, cs_marks;
    double average;
    char grade;

public:
    void getdata();
    void showdata() const;
    void calculate();
    int retrollno() const;
}; // class end here
void student::calculate()
{
    average = (eng_marks + math_marks + sci_marks + lang2_marks + cs_marks) / 5.0;
    if (average >= 90)
        grade = 'A';
    else if (average >= 75)
        grade = 'B';
    else if (average >= 50)
        grade = 'C';
    else
        grade = 'C';
}
void student::getdata()
{
    cout << "\nEnter student's roll number: ";
    cin >> rollno;
    cout << "\n\nEnter student's name: ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "\nAll marks should be out of 100";
    cout << "\nEnter marks in English: ";
    cin >> eng_marks;
    cout << "\nEnter marks in math: ";
    cin >> math_marks;
    cout << "\nEnter marks in science: ";
    cin >> sci_marks;
    cout << "\nEnter marks in 2nd language: ";
    cin >> lang2_marks;
    cout << "\nEnter marks in Computer Science: ";
    cin >> cs_marks;
    calculate();
}
void student::showdata() const
{
    cout<<"\nRoll "
}
