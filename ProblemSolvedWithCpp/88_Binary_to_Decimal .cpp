#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    long long BA, number;
    cout << "Enter the binary number (according to your wish): ";
    cin >> BA;
    long long A1 = BA / 1000000000000000;
    long long B1 = BA % 1000000000000000;
    long long A2 = B1 / 100000000000000;
    long long B2 = B1 % 100000000000000;
    long long A3 = B2 / 10000000000000;
    long long B3 = B2 % 10000000000000;
    long long A4 = B3 / 1000000000000;
    long long B4 = B3 % 1000000000000;
    long long A5 = B4 / 100000000000;
    long long B5 = B4 % 100000000000;
    long long A6 = B5 / 10000000000;
    long long B6 = B5 % 10000000000;
    long long A7 = B6 / 1000000000;
    long long B7 = B6 % 1000000000;
    long long A8 = B7 / 100000000;
    long long B8 = B7 % 100000000;
    long long A9 = B8 / 10000000;
    long long B9 = B8 % 10000000;
    long long A10 = B9 / 1000000;
    long long B10 = B9 % 1000000;
    long long A11 = B10 / 100000;
    long long B11 = B10 % 100000;
    long long A12 = B11 / 10000;
    long long B12 = B11 % 10000;
    long long A13 = B12 / 1000;
    long long B13 = B12 % 1000;
    long long A14 = B13 / 100;
    long long B14 = B13 % 100;
    long long A15 = B14 / 10;
    long long B15 = B14 % 10;
    long long A16 = B15 / 1;
    long long B16 = B15 % 1;
    cout << "The Decimal Form is: " << A1 * pow(2, 15) + A2 * pow(2, 14) + A3 * pow(2, 13) + A4 * pow(2, 12) + A5 * pow(2, 11) + A6 * pow(2, 10) + A7 * pow(2, 9) + A8 * pow(2, 8) + A9 * pow(2, 7) + A10 * pow(2, 6) + A11 * pow(2, 5) + A12 * pow(2, 4) + A13 * pow(2, 3) + A14 * pow(2, 2) + A15 * pow(2, 1) + A16 * pow(2, 0);
}