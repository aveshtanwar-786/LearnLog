#include <iostream>
using namespace std;

class clsPassword
{
private:
    char Password_Choice[20];
    string Password;
    string intconfirmPass;

public:
    void setpassword();
};

void clsPassword::setpassword()
{
    cout << "Set the Password for better security...\nEnter which type of security you want, Pin/Password.\n\tEnter: ";
    cin >> Password_Choice;
    if (Password_Choice == "PIN", "Pin", "pin")
    {
        cout << "PIN\nEnter 4-16 numbers to unlock data\n Remember your password\n\tEnter your New PIN: ";
        cin >> Password;
        cout << "\nEnter your PIN again to confirm, Enter: ";
        cin >> intconfirmPass;
        if (intconfirmPass == Password)
        {
            cout << "PIN Accepted...\n";
        }
        else
        {
            cout << "\nPINs don't match, enter again: ";
            cin >> intconfirmPass;
            if (intconfirmPass == Password)
            {
                cout<<"PIN Accepted...\n";
            }
            else
            {
                cout<<"You forget your PIN....\n\tYou Enter Again in this program.";
                exit(0);
            }
        }
    }
    else 
    {
        cout<<"PASSWORD\nEnter the character to set the security Password\n Remember your New Password\n\tEnter your New Password: ";
        cin>>Password;
        
    }
}

int main()
{
    clsPassword cls;
    cls.setpassword();
}