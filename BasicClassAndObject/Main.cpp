using namespace std;	//Using std (Standard Library)
						
						//Files are part of the standard library
#include <iostream>		//Include iostream file for input/output eg cout
#include <string>		//Include string file so we can use strings
#include "Car.h"		//To use a class defined in a different file, we simply include its .h file

//Creating a class
class MyClass
{
	//Instance Variables
	private:					   //Access specifier, everything under this is private
		string name;
		static int objectCount;    //Creating a static int, cannot assign it a value here hence we cannot initialize it.
		
	//Class Constructors (overloaded)
	public:						//Access specifier, everything under this is public
		MyClass()
		{
			++objectCount;										//Using static variable which will be initialized before we create an object.
			cout << "Created object " << objectCount << "\n";
		}

		MyClass(string name)
		{
			setName(name);
			++objectCount;										
			cout << "Created object " << objectCount << "\n";
		}

		//Class functions
		void hello()
		{
			cout << "Hello " << this->name << "\n";
		}

		void setName(string name)
		{
			this->name = name;
		}

		string getName()
		{
			return this->name;
		}
};

int MyClass::objectCount = 0;		//Because its a static variable, there is only one copy. No matter how many objects of the class we
									//create. We can initialize the variable here in this way. Class::staticVariable

void main()
{
	MyClass myObject1;				//Creating three objects to show static int is working and incrementing
	MyClass myObject2("mary");
	MyClass myObject3;
	Car car1("Toyota", "Blue");		//Here we create an object of the class created in seperate file
	string rtndName;
	
	//Calling and using the classes functions.
	myObject1.setName("kieran");
	rtndName = myObject1.getName();
	
	cout << rtndName << "\n";
	myObject1.hello();
	myObject2.hello();
	car1.printCarDetails();		//Calling a function from the class created in separate file.
	
	system("pause");
}