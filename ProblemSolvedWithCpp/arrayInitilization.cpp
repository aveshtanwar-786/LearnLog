#include <iostream>
using namespace std;
int main()
{
    int array[5] = {20, 30, 40, 50, 60};
    for (int i = 0; i <= 4; i++)
    {
        // cout << "Enter value : ";
        // cin >> array[i];
        cout << array[i] << endl;
    }

    

//findsDataIsPresentOrNot
    // int data;
    // cout << "Data to be searched  : ";
    // cin >> data;
    // int flag = 0;
    // for (int j = 0; j < 5; j++)
    // {
    //     if (array[j] == data)
    //         flag = 1;
    // }
    // if (flag == 1)
    // {
    //     cout << "Data is present..." << endl;
    // }
    // else
    // {
    //     cout << "Data is not present..." << endl;
    // }

//findMaximumValue
    // int T = array[0];
    // for (int j = 1; j <= 5; j++)
    // {
    //     if (T < array[j])
    //     T = array[j];
    // }
    // cout<<"Maximum Value = "<<T;
    return 0;
}