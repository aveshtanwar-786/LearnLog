#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    int of_number, upto_number;
STEP:
    do
    {
        if (num = upto_number)
        {

            goto STEP;
        }
        cout << "Value of num: " << num << endl;
        num = num + 1;
    } while (num < 10);
    return 0;
}