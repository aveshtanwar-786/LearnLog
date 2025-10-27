#include<iostream>
using namespace std;
main()
{
    int marks, otp; char student[30],sirname[30];
    
    cout<<"Enter the marks and Get the grade according to the marks..."<<"\n"<<"\n";
    cout<<"Enter '1' or '2', '1' is for calculate your Grade & '2' is for calculate student(other) grade ";
    cin>>otp;
    if( otp = '1' )
    { 
    cout<<"\n"<<"Enter your marks ";
    cin>>marks;
    if(marks>=90)
    cout<<"your grade is 'A+'";
    else
    if(marks>=80)
    cout<<"your grade is 'A'";
    else
    if(marks>=70)
    cout<<"your grade is 'B+'";
    else
    if(marks>=60)
    cout<<"your grade is 'B'";
    else
    if(marks>=50)
    cout<<"your grade is 'C+'";
    else
    if(marks>=35)
    cout<<"your grade is 'C'";
    else
    cout<<"Sorry, but you are 'FAIL'";
    }
    
    else
    if ( otp = '2' )
    {
    cout<<"\n"<<"Enter the student name (With Sirname) ";
    cin>>student>>sirname;
    cout<<"\n"<<"Enter the marks ";
    cin>>marks;
    if(marks>=90)
    cout<<student<<" "<<sirname<<"'s grade is 'A+'";
    else
    if(marks>=80)
    cout<<student<<" "<<sirname<<"'s grade is 'A'";
    else
    if(marks>=70)
    cout<<student<<" "<<sirname<<"'s grade is 'B+'";
    else
    if(marks>=60)
    cout<<student<<" "<<sirname<<"'s grade is 'B'";
    else
    if(marks>=50)
    cout<<student<<" "<<sirname<<"'s grade is 'C+'";
    else
    if(marks>=35)
    cout<<student<<" "<<sirname<<"'s grade is 'C'";
    else
    cout<<student<<" "<<sirname<<" is 'fail'";
    }
    else
    cout<<"#3opd12i670 error.....";
}
