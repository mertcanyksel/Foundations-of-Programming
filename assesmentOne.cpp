#include <iostream>
using namespace std;


union Data {
	int x;
	int y;
};

int main() {
	union Data mydata; 
	//	Data is the name of the union type (like a blueprint).
	//	mydata is the name of the variable(instance) 
	//	Basically mydata is a variable name we can name everything ,
	// this is just custom name

	mydata.x = 10;

	//	We are accessşşng the value stored in that union (Data)
	//	Union allows storing different data types in the same memory location
	// We can see when we change the one of them , it effects the others

	cout << "Value of x :" << mydata.x << endl;
	cout << "Value of y :" << mydata.y << endl;


	mydata.y = 15;
	cout << "Second Value of x :" << mydata.x << endl;
	cout << "Second Value of y :" << mydata.y << endl;

}
