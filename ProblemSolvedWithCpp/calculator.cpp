#include <iostream>
using namespace std;
int main()
{
    char functionChoice;
    int num1, num2;
    cout << "Enter the whole equation : ";
    cin >> num1 >> functionChoice >> num2;
    switch (functionChoice)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;

    default:
        cout << "402 fattal Error... ";
        break;
    }
    return 0;
}
