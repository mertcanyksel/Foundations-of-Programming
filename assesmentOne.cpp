UNION DATA TYPE
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



STRUCT DATA TYPE
struct firstPoint 
{
	int x, y;
};


int main() {
	int input1;
	cout << "Give first value of array :" ;
	cin >> input1;

	int input2;
	cout << "Give second value of array :";
	cin >> input2;


	firstPoint inputs{ input1,input2 };  
	//'inputs' is a variable  and we initialized with input1 and input2
	//Create a pointer and remember pointer is just a variable that hold the memory address
	//If we use integer pointers , double pointers ,float pointers in the past, now we'll just gonna use
	//  'firstPoint' pointers
	
	firstPoint* p = &inputs;
	// firstPoint is data type
	//p is our name of the pointer
	// so now we can access 'inputs' through 'p'



	cout << "\n\nAccess via 'inputs' variable\n";
	cout <<"This is the first value of array " << inputs.x << "\n";
	cout << "This is the second value of array " << inputs.y << "\n";


	cout << "\nAccess via 'p' (pointer)\n";
	// . has precedence over *
	cout << "This is the first value of array " << (*p).x << "\n\n";


	cout << "With pointer arrows ->\n" ;
	cout << p->x << "\n";  // equivelent to (*p).x
	cout << p->y << "\n";
