#include <iostream>

int main()
{
	double distanceInMiles ;
	double distanceInKM ;

	std :: cout << "Enter the distance is Miles:" ;
	std :: cin >> distanceInMiles ;

	distanceInKM = (distanceInMiles * 1.60934) ; 
	
	std :: cout << "The distance is in KiloMeter is " << distanceInKM << std :: endl ;
	return 0;
}