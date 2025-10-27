#include <iostream>
#include <string.h>
	// weight = mass * gravity
int main() 
{
	int weightOnEarth, planetChoice ;
	double output ;
	std :: string planet ;

	std :: cout << "Enter your weight on Earth : " ;
	std :: cin >> weightOnEarth ;
	
	std :: cout << "Please enter the number of the planet on which you want to fight :- " ;
	std :: cin >> weightOnEarth ;

	switch(weightOnEarth)
	{
		case 1 :
			output = weightOnEarth * 0.38 ;
			planet = "Mercuary" ;
			break;
		case 2 :
			output = weightOnEarth * 0.91 ;
			planet = "Venus" ;
			break;
		case 3 :
			output = weightOnEarth  ;
			planet = "Earth" ;
			break;
		case 4 :
			output = weightOnEarth * 0.38 ;
			planet = "Mars" ;
			break;
		case 5 : 
			output = weightOnEarth * 2.34 ;
			planet = "Jupiter" ;
			break;
		case 6 :
			output = weightOnEarth * 1.06 ;
			planet = "Satrun" ;
			break;
		case 7 :
			output = weightOnEarth * 0.92 ;
			planet = "Uranus" ;
			break;
		case 8 :
			output = weightOnEarth * 1.19 ;
			planet = "Neptune" ;
			break;
		default : 
			std :: cout << "404 Error  'Enter valid planet' ..." ;
	}

	std :: cout << std :: endl << "Your weight on " << planet << " is "  << output <<std :: endl ;
}