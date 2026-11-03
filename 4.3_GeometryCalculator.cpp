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

	return 0;
}
