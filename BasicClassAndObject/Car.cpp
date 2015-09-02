using namespace std;	

#include <iostream>	
#include <string>
//We then include the classes .h file here and define the body of the functions for our class.
#include "Car.h"

//We use class::variable or function, in this program we use this->variable inside the functions but class::variable is acceptable 
//Could also use this->Class::variable
Car::Car()
{
	this->carMake = "No Value";
	this->carColour = "No Value";
}

Car::Car(string carMake, string carCalour)
{
	Car::setCarMake(carMake);
	Car::setCarColour(carCalour);
}

void Car::setCarMake(string carMake)
{
	this->carMake = carMake;
}

void Car::setCarColour(string carColour)
{
	this->carColour = carColour;
}

string Car::getCarMake()
{
	return this->carMake;
}

string Car::getCarColour()
{
	return this->carColour;
}

void Car::printCarDetails()
{
	cout << "CAR MAKE: " << this->carMake << " CAR COLOUR: " << this->carColour << "\n";
}


