#include <iostream>
using namespace std;

void BMI_Calculator()
{
	//The formula for BMI is weight in kilograms divided by height in meters squared. If height has been measured in centimeters, divide by 100 to convert this to meters.

	int unitWeight, Age;
	double weight;
	
	//For age Check
	cout << "Enter you Age(your age should be 2-120): " ; 
	if(Age <=2 && Age >= 120)
	{
		cout << "You are eligible to calculate your BMI." << endl ;
	}

	else 
	{
	cout << "Please provide an age between 2 and 120" << endl << endl ;
	cout << "Enter your age again (between 2-120): " ;
	cin >> Age ;

	if(Age <=2 && Age >= 120)
	{
		cout<< "You are eligible to calculate your BMI." << endl ;
	}

	else
	{
		cout << "You are no eligible to calculate your BMI" ;
		exit (0) ;
	}

	}

	// to Get Weight 
	cout << endl << "Enter weight, " ;
	cout << "in which unit would you prefer to enter your weight:" << endl ;
	cout << "\t1 for KiloGram\n\t2 for Pounds" << endl ;
	cout << "Enter here: " ;
	cin >> unitWeight ;

	if(unitWeight == 1)
	{
		cout << "Enter your weight in KiloGram: " ;
		cin >> weight ;
	}

	else if(unitWeight == 2)
	{
		cout << "Enter your weight in Poundes: " ;
		cin >> weight ;
	}

	else 
	{
	cout<< "Enter valid number... " ;
	exit(0);
	}

	
}

void calculator()
{
	char input ;
	long double Number1, Number2, output;

	cout << "Enter the Equation with two orpend (And function of +, -, X and / only): " ;
	cin >> Number1 >> input >> Number2 ;

	switch(input)
	{
		case '+' :	
			output = (Number1 + Number2);
		break;
		case '-' : 
			output = (Number1 - Number2);
		break;
		case 'x'  : 
		case '*'  : 
		case 'X' :
			output = (Number1 * Number2) ;
		break;
		case '/' : 
			output = (Number1 / Number2) ;
		break;
	}
	cout << "Your answer is : " << output ;
}

int main()
{
	int choice;

	cout << "Menu of this program:- " << endl ;
	cout << "\t1 for Calculator\n\t2 for Body Mass Index(BMI) Calculator\n " << endl ;
	cout << "Enter here: " ;
	cin >> choice ;
	
	if(choice == 1)
	{
	//calculator
	calculator();
	}
	else if(choice == 2)
	{
	//BMI Calculator
	BMI_Calculator();
	}
}