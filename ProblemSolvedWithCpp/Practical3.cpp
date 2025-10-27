// Mohd. Avesh Tanwar (110064213027)
#include <iostream>
using namespace std;
int main()
{
    int input_1;
    float input_2;
    cout << "Enter the two number (in integer, in float): ";
    cin >> input_1 >> input_2;
    int output_1 = input_1 + input_2;
    float output_2 = input_1 + input_2;
    cout << "The Output in integer is " << output_1 << " and float form is " << output_2 << ".";
    return 0;
}