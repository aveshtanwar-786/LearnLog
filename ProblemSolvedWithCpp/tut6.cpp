// There are two types of header files
// 1. system header files: It comes with the compiler
#include <iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h"---> This will produce an error if this.h is not present in the current ]irectory '

using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Operators in C++"
         << "\n";
    cout << "Following sre the types of operators in C++"
         << "\n";
    // Arithmetic Operators
    cout << "The value of a + b is " << a + b << "\n";
    cout << "The value of a - b is " << a - b << "\n";
    cout << "The value of a * b is " << a * b << "\n";
    cout << "The value of a / b is " << a / b << "\n";
    cout << "The value of a % b is " << a % b << "\n";
    cout << "The value of a ++ is " << a++ << "\n";
    cout << "The value of a -- b is " << a-- << "\n";
    cout << "The value of ++a is " << ++a << "\n";
    cout << "The value of --a is " << --a << "\n";
    cout << "\n";

    // Assignment operators --> used to assign values to variables
    // int a=3, b= 9;
    // char d= 'd';

    // Comparision Operators
    cout << "Following are the comparision  operators in C++"
         << "\n";
    cout << "The values of a ==b is " << (a == b) << "\n";
    cout << "The values of a !=b is " << (a != b) << "\n";
    cout << "The values of a >=b is " << (a >= b) << "\n";
    cout << "The values of a <=b is " << (a <= b) << "\n";
    cout << "The values of a > b is " << (a > b) << "\n";
    cout << "The values of a < b is " << (a < b) << "\n";
    int example;
    cin>>example;
    cout<<example;
    return 0;
}
