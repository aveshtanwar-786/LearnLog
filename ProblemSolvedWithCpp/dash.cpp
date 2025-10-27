#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string whatToLearn;
	string whereToLearn = "RaniBaug (Mumbai)";
	cout << "Enter what to learn : " ;
	cin >> whatToLearn ;
	
	if (whatToLearn == whereToLearn)
	{
		cout << whereToLearn ;
	}
	else
	{
	cout << "More Comming soon... ";
	exit (0);
	}
}