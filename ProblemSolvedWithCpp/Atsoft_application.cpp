#include <iostream>
using namespace std;

class decimal_binary
{
    int ValueInput;
    int Input1 = ValueInput / 2;
    int Input2 = Input1 / 2;
    int Input3 = Input2 / 2;
    int Input4 = Input3 / 2;
    int Input5 = Input4 / 2;
    int Input6 = Input5 / 2;
    int Input7 = Input6 / 2;
    int Input8 = Input7 / 2;
    int Input9 = Input8 / 2;
    int Input10 = Input9 / 2;
    int Input11 = Input10 / 2;
    int Input12 = Input11 / 2;
    int Input13 = Input12 / 2;
    int Input14 = Input13 / 2;
    int Output1 = ValueInput % 2;
    int Output2 = Input1 % 2;
    int Output3 = Input2 % 2;
    int Output4 = Input3 % 2;
    int Output5 = Input4 % 2;
    int Output6 = Input5 % 2;
    int Output7 = Input6 % 2;
    int Output8 = Input7 % 2;
    int Output9 = Input8 % 2;
    int Output10 = Input9 % 2;
    int Output11 = Input10 % 2;
    int Output12 = Input11 % 2;
    int Output13 = Input12 % 2;
    int Output14 = Input13 % 2;
    public:
    int getDecBinData()
    {
        cout<<"Enter Value: ";
        cin>>ValueInput;
    }
    int putDecBinData()
    {
        cout<<"The Output:-\n\t"<<ValueInput<<" "<<Output14<<Output13<<Output12<<Output11<<Output10<<Output9<<Output8<<Output7<<Output6<<Output5<<Output4<<Output3<<Output2<<Output1;
    }
};
class decimal_octal
{
};
class decimal_hexadecimal
{
};
class binary_decimal
{
};
class octal_decimal
{
};
class hexadecimal_decimal
{
};
class decimal_all
{
};

int main()
{
    decimal_binary dtb;
    dtb.getDecBinData();
    dtb.putDecBinData();
}