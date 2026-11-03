//This program offers the user a menu and has them pick from three shapes and ‘exit’. 
//Once picked, the program will then calculate the area of the shape picked and display the answer. 
// If ‘exit’ is picked, the program will terminate.

#include <iostream>
using namespace std;

int main()
{
	//Declare constant.
	const double PI = 3.14;

	//Declare circle input variables.
	double radius;
	double cTotal;

	//Declare rectangle input variables.
	double length;
	double width;
	double rTotal;

	//Declare triangle input variables.
	double base;
	double height;
	double tTotal;

	//Menu prompt.
	cout << "Geometry Calculator Menu. Which shape would you like to find the area of?" << endl;
	cout << "1. Circle" << endl << "2. Rectangle" << endl << "3. Triangle" << endl;
	int choice;
	cin >> choice;

	//Menu switch statement.

	do
	{
		switch (choice)
		{
		case 1:
			cout << endl << "Circle Area Formula: pi * radius^2" << endl;
			cout << "Input a radius." << endl;
			cin >> radius;
			cTotal = PI * pow(radius, 2);
			cout << endl << "Area: " << cTotal << endl;
			break;
		case 2:
			cout << endl << "Rectangle Area Formula: length * width" << endl;
			cout << "Input a length." << endl;
			cin >> length;
			cout << endl << "Input a width." << endl;
			cin >> width;
			rTotal = length * width;
			cout << endl << "Area: " << rTotal << endl;
			break;
		case 3:
			cout << endl << "Triangle Area Formula: 1/2(base * height)" << endl;
			cout << "Input a base." << endl;
			cin >> base;
			cout << endl << "Input a height." << endl;
			cin >> height;
			tTotal = 0.5 * base * height;
			cout << endl << "Area: " << tTotal << endl;
			break;
		}
	} while (choice != 4);


	return 0;
}
