// String Functions
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    char S1[100], S2[100];
    puts("Enter a String : ");
    gets(S1);
    puts(S1);
    cout<<endl<<endl;
    gets(S2);
    puts(S2);

    cout << "length = " << strlen(S1)<<endl;

    cout<<"concatenates of two string is : "<<strcat(S1,S2);

    cout<<" copies "<<strcpy(S1,S2);
    cout<<S1<<endl<<S2;
    return 0;
}