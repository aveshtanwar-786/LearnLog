#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    char choice = 'Y';
    while (choice == 'Y' || choice == 'y')
    {
        int Decision;
        cout << "Rule:\n\tEnter the corresponding number \n\t\t      Numbers\t\tValues\n                     ------------------------------------------------------------\n\t\t\t1 |\tDecimal to Binary Conversion\n\t\t\t2 |\tDecimal to Octal Conversion\n\t\t\t3 |\tDecimal to Hexadecimal Conversion\n\t\t\t4 |\tBinary to Decimal Conversion\n\t\t\t5 |\tOctal to decimal Conversion\n\t\t\t6 |\tHexadecimal to decimal conversion\n\t\t\t7 |\tDecimal to Binary, Octal, Hexadecimal conversion\n\n\tEnter here: ";
        cin >> Decision;
        if (Decision == 1) // Decimal to Binary conversion
        {
            cout << "\nEnter Decimal Number: ";
            int Entervalue;
            cin >> Entervalue;
            int number1 = Entervalue / 2;
            int number2 = number1 / 2;
            int number3 = number2 / 2;
            int number4 = number3 / 2;
            int number5 = number4 / 2;
            int number6 = number5 / 2;
            int number7 = number6 / 2;
            int number8 = number7 / 2;
            int number9 = number8 / 2;
            int number10 = number9 / 2;
            int number11 = number10 / 2;
            int number12 = number11 / 2;
            int number13 = number12 / 2;
            int number14 = number13 / 2;
            int Ans1 = Entervalue % 2;
            int Ans2 = number1 % 2;
            int Ans3 = number2 % 2;
            int Ans4 = number3 % 2;
            int Ans5 = number4 % 2;
            int Ans6 = number5 % 2;
            int Ans7 = number6 % 2;
            int Ans8 = number7 % 2;
            int Ans9 = number8 % 2;
            int Ans10 = number9 % 2;
            int Ans11 = number10 % 2;
            int Ans12 = number11 % 2;
            int Ans13 = number12 % 2;
            int Ans14 = number13 % 2;
            cout << "The Decimal Number '" << Entervalue << "' into Binary Number: " << Ans14 << Ans13 << " " << Ans12 << Ans11 << Ans10 << Ans9 << " " << Ans8 << Ans7 << Ans6 << Ans5 << " " << Ans4 << Ans3 << Ans2 << Ans1;
        }
        else if (Decision == 2) // Decimal to Octal conversion
        {
            int Entervalue;
            cout << "Enter Decimal number: ";
            cin >> Entervalue;
            int number_octal_1 = Entervalue / 8;
            int number_octal_2 = number_octal_1 / 8;
            int number_octal_3 = number_octal_2 / 8;
            int number_octal_4 = number_octal_3 / 8;
            int number_octal_5 = number_octal_4 / 8;
            int number_octal_6 = number_octal_5 / 8;
            int number_octal_7 = number_octal_6 / 8;
            int number_octal_8 = number_octal_7 / 8;
            int number_octal_9 = number_octal_8 / 8;
            int number_octal_10 = number_octal_9 / 8;
            int number_octal_11 = number_octal_10 / 8;
            int number_octal_12 = number_octal_11 / 8;
            int number_octal_13 = number_octal_12 / 8;
            int number_octal_14 = number_octal_13 / 8;
            int Ans_octal_1 = Entervalue % 8;
            int Ans_octal_2 = number_octal_1 % 8;
            int Ans_octal_3 = number_octal_2 % 8;
            int Ans_octal_4 = number_octal_3 % 8;
            int Ans_octal_5 = number_octal_4 % 8;
            int Ans_octal_6 = number_octal_5 % 8;
            int Ans_octal_7 = number_octal_6 % 8;
            int Ans_octal_8 = number_octal_7 % 8;
            int Ans_octal_9 = number_octal_8 % 8;
            int Ans_octal_10 = number_octal_9 % 8;
            int Ans_octal_11 = number_octal_10 % 8;
            int Ans_octal_12 = number_octal_11 % 8;
            int Ans_octal_13 = number_octal_12 % 8;
            int Ans_octal_14 = number_octal_13 % 8;
            cout << "The Decimal Number '" << Entervalue << "' into Octal Number: " << Ans_octal_6 << Ans_octal_5 << Ans_octal_4 << " " << Ans_octal_3 << Ans_octal_2 << Ans_octal_1;
        }
        else if (Decision == 3) // Decimal to Hexadecimal Conversion
        {
            int Entervalue;
            cout << "Enter Decimal Number: ";
            cin >> Entervalue;
            int NUMBER1 = Entervalue / 16;
            int NUMBER2 = NUMBER1 / 16;
            int NUMBER3 = NUMBER2 / 16;
            int NUMBER4 = NUMBER3 / 16;
            int NUMBER5 = NUMBER4 / 16;
            int NUMBER6 = NUMBER5 / 16;
            int NUMBER7 = NUMBER6 / 16;
            int NUMBER8 = NUMBER7 / 16;
            int NUMBER9 = NUMBER8 / 16;
            int NUMBER10 = NUMBER9 / 16;
            int NUMBER11 = NUMBER10 / 16;
            int NUMBER12 = NUMBER11 / 16;
            int NUMBER13 = NUMBER12 / 16;
            int NUMBER14 = NUMBER13 / 16;
            int A1 = Entervalue % 16;
            int A2 = NUMBER1 % 16;
            int A3 = NUMBER2 % 16;
            int A4 = NUMBER3 % 16;
            int A5 = NUMBER4 % 16;
            int A6 = NUMBER5 % 16;
            int A7 = NUMBER6 % 16;
            int A8 = NUMBER7 % 16;
            int A9 = NUMBER8 % 16;
            int A10 = NUMBER9 % 16;
            int A11 = NUMBER10 % 16;
            int A12 = NUMBER11 % 16;
            int A13 = NUMBER12 % 16;
            int A14 = NUMBER13 % 16;
            cout << "The Decimal Number '" << Entervalue << "' into Hexadecimal Number: ";
            switch (A5)
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << A5;
                break;
            }
            switch (A4)
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << A4;
                break;
            }
            switch (A3)
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << A3;
                break;
            }
            switch (A2)
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << A2;
                break;
            }
            switch (A1)
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << A1;
                break;
            }
        }
        else if (Decision == 4)
        {
            long long BA, number;
            cout << "Enter the binary number: ";
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
            cout << "The Binart Number '" << BA << "' into Decimal Number: " << A1 * pow(2, 15) + A2 * pow(2, 14) + A3 * pow(2, 13) + A4 * pow(2, 12) + A5 * pow(2, 11) + A6 * pow(2, 10) + A7 * pow(2, 9) + A8 * pow(2, 8) + A9 * pow(2, 7) + A10 * pow(2, 6) + A11 * pow(2, 5) + A12 * pow(2, 4) + A13 * pow(2, 3) + A14 * pow(2, 2) + A15 * pow(2, 1) + A16 * pow(2, 0);
        }
        else if (Decision == 5) // Octal to Decimal conversion
        {
            cout << "\tThis version will come soon ! ....";
        }
        else if (Decision == 6) // Hexadecimal to decimal conversion
        {
            cout << "\tThis version will come soon ! ....";
        }
        else if (Decision == 7)
        {
            cout << "\nEnter the Decimal Number: ";
            int Entervalue;
            cin >> Entervalue;
            int number1 = Entervalue / 2, number2 = number1 / 2, number3 = number2 / 2, number4 = number3 / 2, number5 = number4 / 2, number6 = number5 / 2, number7 = number6 / 2, number8 = number7 / 2, number9 = number8 / 2, number10 = number9 / 2, number11 = number10 / 2, number12 = number11 / 2, number13 = number12 / 2, number14 = number13 / 2;
            int Ans1 = Entervalue % 2;
            int Ans2 = number1 % 2;
            int Ans3 = number2 % 2;
            int Ans4 = number3 % 2;
            int Ans5 = number4 % 2;
            int Ans6 = number5 % 2;
            int Ans7 = number6 % 2;
            int Ans8 = number7 % 2;
            int Ans9 = number8 % 2;
            int Ans10 = number9 % 2;
            int Ans11 = number10 % 2;
            int Ans12 = number11 % 2;
            int Ans13 = number12 % 2;
            int Ans14 = number13 % 2;
            cout << "The output:\n\t\tBinary:\t" << Ans14 << Ans13 << " " << Ans12 << Ans11 << Ans10 << Ans9 << " " << Ans8 << Ans7 << Ans6 << Ans5 << " " << Ans4 << Ans3 << Ans2 << Ans1;
            // decimal to octal
            int number_octal_1 = Entervalue / 8;
            int number_octal_2 = number_octal_1 / 8;
            int number_octal_3 = number_octal_2 / 8;
            int number_octal_4 = number_octal_3 / 8;
            int number_octal_5 = number_octal_4 / 8;
            int number_octal_6 = number_octal_5 / 8;
            int number_octal_7 = number_octal_6 / 8;
            int number_octal_8 = number_octal_7 / 8;
            int number_octal_9 = number_octal_8 / 8;
            int number_octal_10 = number_octal_9 / 8;
            int number_octal_11 = number_octal_10 / 8;
            int number_octal_12 = number_octal_11 / 8;
            int number_octal_13 = number_octal_12 / 8;
            int number_octal_14 = number_octal_13 / 8;
            int Ans_octal_1 = Entervalue % 8;
            int Ans_octal_2 = number_octal_1 % 8;
            int Ans_octal_3 = number_octal_2 % 8;
            int Ans_octal_4 = number_octal_3 % 8;
            int Ans_octal_5 = number_octal_4 % 8;
            int Ans_octal_6 = number_octal_5 % 8;
            int Ans_octal_7 = number_octal_6 % 8;
            int Ans_octal_8 = number_octal_7 % 8;
            int Ans_octal_9 = number_octal_8 % 8;
            int Ans_octal_10 = number_octal_9 % 8;
            int Ans_octal_11 = number_octal_10 % 8;
            int Ans_octal_12 = number_octal_11 % 8;
            int Ans_octal_13 = number_octal_12 % 8;
            int Ans_octal_14 = number_octal_13 % 8;
            cout << "\n\t\t Octal: " << Ans_octal_6 << Ans_octal_5 << Ans_octal_4 << " " << Ans_octal_3 << Ans_octal_2 << Ans_octal_1;
            // decimal to hexadecimal
            int NUMBER1 = Entervalue / 16;
            int NUMBER2 = NUMBER1 / 16;
            int NUMBER3 = NUMBER2 / 16;
            int NUMBER4 = NUMBER3 / 16;
            int NUMBER5 = NUMBER4 / 16;
            int NUMBER6 = NUMBER5 / 16;
            int NUMBER7 = NUMBER6 / 16;
            int NUMBER8 = NUMBER7 / 16;
            int NUMBER9 = NUMBER8 / 16;
            int NUMBER10 = NUMBER9 / 16;
            int NUMBER11 = NUMBER10 / 16;
            int NUMBER12 = NUMBER11 / 16;
            int NUMBER13 = NUMBER12 / 16;
            int NUMBER14 = NUMBER13 / 16;
            int A1 = Entervalue % 16;
            int A2 = NUMBER1 % 16;
            int A3 = NUMBER2 % 16;
            int A4 = NUMBER3 % 16;
            int A5 = NUMBER4 % 16;
            int A6 = NUMBER5 % 16;
            int A7 = NUMBER6 % 16;
            int A8 = NUMBER7 % 16;
            int A9 = NUMBER8 % 16;
            int A10 = NUMBER9 % 16;
            int A11 = NUMBER10 % 16;
            int A12 = NUMBER11 % 16;
            int A13 = NUMBER12 % 16;
            int A14 = NUMBER13 % 16;
            cout << "\n\t   Hexadecimal:\t";
            switch (A5)
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << A5;
                break;
            }
            switch (A4)
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << A4;
                break;
            }
            switch (A3)
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << A3;
                break;
            }
            switch (A2)
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << A2;
                break;
            }
            switch (A1)
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << A1;
                break;
            }
        }
        else
        {
            cout << "\tEnter valid Number... ";
            exit(0);
        }
        cout << "\nWould you like to continue? (Y/N): ";
        cin >> choice;
    }
}

