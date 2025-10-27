
// There are two types of header file:
//  1): System Header file :- It comes with the compiler.
#include <iostream> // --> Example of system hearder file.

// 2): User defined Header file :- It is written by the programmer.
// #include "this.h"   // --> Example of user defined header file. // --> This will produce an error if 'this.h' is not present in the current directory.

// For all C++ system header file, visit "cpp reference for header file"

using namespace std;
int main()
{
     int variableOne, variableTwo;
     cout << "This program is written to test header file. " << endl;
     cout << "And to test all operators." << endl
          << "Enter any two number for test operators: " << endl;
     cin >> variableOne >> variableTwo;

     // Arithematic Opeartors
     cout << "There are many type of Arithematic Operators." << endl
          << "The uses of these are as follows:- " << endl;
     cout << "Addition operator         '+'  :: 'A + B' = " << variableOne + variableTwo << endl;
     cout << "Subtraction operator      '-'  :: 'A - B' = " << variableOne - variableTwo << endl;
     cout << "Multiplication operator   '*'  :: 'A * B' = " << variableOne * variableTwo << endl;
     cout << "Division operator         '/'  :: 'A / B' = " << variableOne / variableTwo << endl;
     cout << "Modulus operator          '%'  :: 'A % B' = " << variableOne % variableTwo << endl;
     cout << "After increment operator  '++' :: ' A ++' = " << variableOne++ << endl; // here A=variableOne+1;
     cout << "After decrement operator  '--' :: ' A--' = " << variableOne-- << endl;  // here A=variable-1;
     cout << "Before increment operator '++' :: '++ A' = " << ++variableOne << endl;
     cout << "Before decrement operator '--' :: '-- A' = " << --variableOne << endl
          << endl;

     // Assignment Operators --> used to assign values to variable, i.e.,
     //  char A = 'A';

     // Comparision Opeartor --> operator should be enclosed with parentheses
     cout << "There are many type of Comparision Operators." << endl
          << "The uses of these are as follows:- " << endl;

     cout << "Equal to operator                   '==' :: 'A == B' = " << (variableOne == variableTwo) << endl;
     cout << "Not Equal to operator               '!=' :: 'A != B' = " << (variableOne != variableTwo) << endl;
     cout << "Greater than operator               '>'  :: 'A > B' = " << (variableOne > variableTwo) << endl;
     cout << "Greater than or equal to operator   '>=' :: 'A >= B' = " << (variableOne >= variableTwo) << endl;
     // cout << "Less than operator '<' :: 'A < B' = " << variableTwo < variableOne << endl;
     cout << "Less than or equal to operator      '<=' :: 'A <= B' = " << (variableOne <= variableTwo) << endl
          << endl;
     // cout << "Three-way comparison operator '<=>' :: 'A <= B' = " << (variableOne < = > variableTwo) << endl;

     // logical operators
     cout << "There are many type of logical operators." << endl
          << "The uses of these are as follows:- " << endl;
     cout << "And Operator     '&&' :: 'A && B' =  is " << (variableOne && variableTwo) << endl;
     cout << "Or operator      '||' :: 'A || B' =  is " << (variableOne || variableTwo) << endl;
     cout << "Not Operator     '!'  :: '! A' = " << (!variableOne) << endl;
     return 0;
}