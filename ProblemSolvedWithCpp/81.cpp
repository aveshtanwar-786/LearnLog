// This program was created by Mohd. Avesh Tanwar. For Knowledge purpse
#include <iostream>
using namespace std;
int main()
{
    char Name[20]; 
    char sirname[20]; 
    char subjectname[20];
    cout<<"Enter the Student Name(With Sir Name): ";
    cin>>Name>>sirname;
    cout<<"Please tell How many letter are there in the subject name\nThe value must be between[1-10] respectively: ";
    int choiceofsubject;
    char subjectname1[20];
    char subjectname2[20];
    char subjectname3[20];
    char subjectname4[20];
    char subjectname5[20];
    char subjectname6[20];
    char subjectname7[20];
    char subjectname8[20];
    char subjectname9[20];
    char subjectname10[20];
    cin>>choiceofsubject;
    switch (choiceofsubject)
    {
        case 1 :
            cout<<"Enter The Students Favourate Subject Name: ";
            cin>>subjectname1;
            break;
        case 2 :
            cout<<"Enter The Students Favourate Subject Name: ";
            cin>>subjectname1>>subjectname2;
            break;
        case 3 :
            cout<<"Enter The Students Favourate Subject Name: ";
            cin>>subjectname1>>subjectname2>>subjectname3;
            break;
        case 4 :
            cout<<"Enter The Students Favourate Subject Name: ";
            cin>>subjectname1>>subjectname2>>subjectname3>>subjectname4;
            break;
        case 5 :
            cout<<"Enter The Students Favourate Subject Name: ";
            cin>>subjectname1>>subjectname2>>subjectname3>>subjectname4>>subjectname5;
            break;
        case 6 :
            cout<<"Enter The Students Favourate Subject Name: ";
            cin>>subjectname1>>subjectname2>>subjectname3>>subjectname4>>subjectname5>>subjectname6;
            break;
        case 7 :
            cout<<"Enter The Students Favourate Subject Name: ";
            cin>>subjectname1>>subjectname2>>subjectname3>>subjectname4>>subjectname5>>subjectname6>>subjectname7;
            break;
        case 8 :
            cout<<"Enter The Students Favourate Subject Name: ";
            cin>>subjectname1>>subjectname2>>subjectname3>>subjectname4>>subjectname5>>subjectname6>>subjectname7>>subjectname8;
            break;
        case 9 :
            cout<<"Enter The Students Favourate Subject Name: ";
            cin>>subjectname1>>subjectname2>>subjectname3>>subjectname4>>subjectname5>>subjectname6>>subjectname7>>subjectname8>>subjectname9;
            break;
        case 10 :
            cout<<"Enter The Students Favourate Subject Name: ";
            cin>>subjectname1>>subjectname2>>subjectname3>>subjectname4>>subjectname5>>subjectname6>>subjectname7>>subjectname8>>subjectname9>>subjectname10;
            break;
    default:
        cout<<"Enter valid number...";
        break;
    }
    cout<<"Enter Student's Standard: ";
    int standard;
    cin>>standard;
    cout<<"Enter Class Division: ";
    char division;
    cin>>division;
    cout<<"Enter The student Roll no.: ";
    int rollno;
    cin>>rollno;
    int enrollmentnochoiceofsubject;double enrollment;
    cout<<"Can you need to Enter Enrollment number \nEnter 1 for Yes or 2 for 'no'\nEnter here: ";
    cin>>enrollmentnochoiceofsubject;
    switch (enrollmentnochoiceofsubject)
    {
    case 1:
        cout<<"Enter student Enrollment No.: ";
        cin>>enrollment;
        break;
    case 2:
        cout<<"Your Entering Data is commplete\n";
        break;
    default:cout<<"Enter Valid number next Time\n";
        break;
    }
    cout<<"Note: If you exit the program, The data can be lost\nYou Have to see your Data\nEnter 1 for yes or 2 for exit \nEnter Here: ";
    int outputchoiceofsubject;
    cin>>outputchoiceofsubject;
    switch (outputchoiceofsubject)
    {
    case 1 :
        {
            cout<<"The Output:\n\n   Student Data\n--------------------\nStudent Name is "<<Name<<" "<<sirname<<". His Favourate subject name is  ";
        switch (choiceofsubject)
    {
        case 1 :
            cout<<subjectname1;
            break;
        case 2 :
            cout<<subjectname1<<" "<<subjectname2;
            break;
        case 3 :
            cout<<subjectname1<<" "<<subjectname2<<" "<<subjectname3;
            break;
        case 4 :
            cout<<subjectname1<<" "<<subjectname2<<" "<<subjectname3<<" "<<subjectname4;
            break;
        case 5 :
            cout<<subjectname1<<" "<<subjectname2<<" "<<subjectname3<<" "<<subjectname4<<" "<<subjectname5;
            break;
        case 6 :
            cout<<subjectname1<<" "<<subjectname2<<" "<<subjectname3<<" "<<subjectname4<<" "<<subjectname5<<" "<<subjectname6;
            
            break;
        case 7 :
            cout<<subjectname1<<" "<<subjectname2<<" "<<subjectname3<<" "<<subjectname4<<" "<<subjectname5<<" "<<subjectname6<<" "<<subjectname7;
            break;
        case 8 :
            cout<<subjectname1<<" "<<subjectname2<<" "<<subjectname3<<" "<<subjectname4<<" "<<subjectname5<<" "<<subjectname6<<" "<<subjectname7<<" "<<subjectname8;
            break;
        case 9 :
            cout<<subjectname1<<" "<<subjectname2<<" "<<subjectname3<<" "<<subjectname4<<" "<<subjectname5<<" "<<subjectname6<<" "<<subjectname7<<" "<<subjectname8<<" "<<subjectname9;
            break;
        case 10 :
            cout<<subjectname1<<" "<<subjectname2<<" "<<subjectname3<<" "<<subjectname4<<" "<<subjectname5<<" "<<subjectname6<<" "<<subjectname7<<" "<<subjectname8<<" "<<subjectname<<" "<<subjectname10;
            break;
    defaulth:
        break;
    }
        cout<<". \nHe is studying in standard "<<standard<<" div. is "<<division<<". His roll no. is "<<rollno<<".\n ";

        switch (enrollmentnochoiceofsubject)
    {
    case 1:
        cout<<"And Enrollment no. is "<<enrollment<<".\n";
        break;
    case 2:
        cout<<" ";
        break;
    default:cout<<" ";
        break;
    }
        }
        break;
    
    default:
        cout<<"The Data is lost";
        break;
    }
    cout<<"----------------------";
}