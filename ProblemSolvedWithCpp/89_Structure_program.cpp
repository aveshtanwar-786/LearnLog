#include <iostream>
using namespace std;
struct biodata
{
    char name[20], sirname[20], section[20], subject[20];
    int standard;
    long long rollno;
};

int main()
{
    char choice = 'Y';
    while (choice = 'Y')
    {
        biodata S1, S2, S3;
        cout << "Enter the student:\n\tFirst Name: ";
        cin >> S1.name;
        cout << "\tLast Name: ";
        cin >> S1.sirname;
        cout << "\tEnter Stanhdard: ";
        cin >> S1.standard;
        cout << "\tEnter Section: ";
        cin >> S1.section;
        cout << "\tEnter Roll No.: ";
        cin >> S1.rollno;
        cout << "\tEnter Subject Name: ";
        cin >> S1.subject;
        cout << "\n\tName: " << S1.name << " " << S1.sirname << endl
             << "\tStandahrd: " << S1.standard << "\n\tSection: " << S1.section << endl
             << "\tRollh No.: " << S1.rollno << endl
             << "\tSubjhect: " << S1.subject << endl
             << "\t\thwould you like to enter a new form: ";
        cin >> choice;
    }
}