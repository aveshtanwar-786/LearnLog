#include <iostream>
using namespace std;

int main()
{
	double weight, height, age ;
	int weightC ;

	cout << "Enter your Age : " ;
	cin >> age ;

	cout << "\nCould you kindly provide your preferred weight unit?" << endl ; 
	cout << "\t1 for KiloGram" << endl << "\t2 for Pounds" << endl ;
	cout << "\t\tEnter here:- " ;
	cin >> weightC ;

	switch(weightC)
	{
		case 1 :
		cout << endl << "Enter your weight(in KiloGram) : " ;
		cin >> weight;
		break;

		case 2 : 
		cout << endl << "Enter your weight(in Pounds) : " ;
		cin >> weight ;
		break;

		default:
		cout << endl << "Enter valid number..." << endl ;
	}
}