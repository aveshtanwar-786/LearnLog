// Header File require ctype.h .
#include <ctype.h>
#include <iostream>
using namespace std;
int main()
{
    int c;
    cout << "Enter the Value of 'c' : ";
    cin >> c;
    int answer = isalpha(c);
    cout<<answer;

    // cout << "the value of isalpha(c) :- " << isalpha(c) << endl;
    // cout << "the value of isdigit(c) :- " << isdigit(c) << endl;
    // cout << "the value of isalnum(c) :- " << isalnum(c) << endl;
    // cout << "the value of islower(c) :- " << islower(c) << endl;
    // cout << "the value of isupper(c) :- " << isupper(c) << endl;
    // cout << "the value of toupper(c) :- " << toupper(c) << endl;
    // cout << "the value of tolower(c) :- " << tolower(c) << endl;
}