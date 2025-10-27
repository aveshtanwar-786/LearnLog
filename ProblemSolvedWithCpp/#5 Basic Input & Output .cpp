#include <iostream>
using namespace std;

// "<<" this operator is known as insertion operator.
// ">>" this operator is known as extraction operator.

int main()
{
    int variableOne, variableTwo;
    cout << "This Program is written for basic input/output check." << endl;
    cout << "Enter the value of the variableOne:";
    cin >> variableOne;
    cout << "Enter the value of the variableTwo:";
    cin >> variableTwo;
    cout << "The Output is " << variableOne + variableTwo;
    return 0;
}