#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    char S1[100], S2[100];
    cout << "Enter the First String: ";
    gets(S1);
    cout << "Enter the second String: ";
    gets(S2);
    cout << endl
         << "Comparing the two Strings: " << strcmp(S1, S2) << endl
         << "Displaying the length of the strings: " << strlen(S1) << " and " << strlen(S2) << endl
         << "Append the strings: " << strcat(S1, S2);
}