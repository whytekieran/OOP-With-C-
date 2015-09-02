//Here is how we define and use classes from multiple files, firstly we must define the classes structure in a .h file
//This includes variables and function headers.
#ifndef CAR_H
#define CAR_H

class Car
{
	private:
		string carMake;
		string carColour;

	public:
		Car();
		Car(string carMake, string carCalour);
		void setCarMake(string carMake);
		string getCarMake();
		void setCarColour(string carColour);
		string getCarColour();
		void printCarDetails();
};

#endif 
