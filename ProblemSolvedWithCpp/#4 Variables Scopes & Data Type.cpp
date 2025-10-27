#include <iostream>
using namespace std;

string exampleOf = "The another function output:- Mohammad_Avesh -:  ";     //global variable
void sum()
{
    cout<< exampleOf ;
}

int main(){

    string exampleOf = "The example of " ;
    int intger = -10;
    unsigned int unsignedIntger = 20;
    short int shortIntger = -30;
    long int longIntger = -40;
    unsigned short int unsignedShortIntger = 50;
    unsigned long int unsignedLongIntger = 60;
    long long int longLongIntger = -70;
    signed char signedCharacter = 'A';
    unsigned char unsignedCharacter = 'B';
    wchar_t wcharCharacter = L'E';
    float floating = 100.110;
    double doubleFloating = 120.130;
    long double longDoubleFloating = 140.150;
    
    cout << exampleOf << "int is " << intger << endl;
    cout << exampleOf << "unsigned int  is " << unsignedIntger << endl;
    cout << exampleOf << "short int  is " << shortIntger << endl;
    cout << exampleOf << "long int  is " << longIntger << endl;
    cout << exampleOf << "unsigned short int  is " << unsignedShortIntger << endl;
    cout << exampleOf << "unsigned long int is " << unsignedLongIntger << endl;
    cout << exampleOf << "long Long int is " << longLongIntger << endl;
    cout << exampleOf << "signed char is " << signedCharacter << endl;
    cout << exampleOf << "unsigned char is " << unsignedCharacter << endl;
    cout << exampleOf << "wchar_t is " << wcharCharacter << endl;
    cout << exampleOf << "float is " << floating << endl;
    cout << exampleOf << "double is " << doubleFloating << endl;
    cout << exampleOf << "long Double is " << longDoubleFloating << endl;

    sum();
}