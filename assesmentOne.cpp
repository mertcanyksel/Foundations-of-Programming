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
	}


ENUM DATA TYPE
#include <iostream>
using namespace std;
  
enum StatesOne
{
	Working,
	Failed 
};

enum StatesTwo {
	Workingg = 1,
	Failedd
};


int main() {
	StatesOne mystateone = Working;
	cout << mystateone <<"\n";

// We can not give the same name for the name of the values

	StatesTwo mystatetwo = Workingg;
	cout << mystatetwo << "\n";


}


//ENUM SECOND Example
#include <iostream>
using namespace std;
  
enum StatesOne
{
	Working,
	Failed =5,
	Stable,
	Not_stable
};




int main() {
	StatesOne mystateone = Working;
	cout << mystateone <<"\n";

	StatesOne mystatetwo = Stable;
	cout << mystatetwo << "\n";



}




ENUM THIRD EXAMPLE
#include <iostream>
using namespace std;
  
enum statesone
{
	working,
	failed ,
	stable,
	not_stable
};




int main() {

	int userinput;
	cout << "what's your work status :";
	cin >> userinput;

	statesone currentstate;



	//we can not assign an int (or different type of data) to entity of type "statesone"
	// we need to convert cast this integer (userinput) in to statesone enum 
	// and than we can assign userinput to currentstate variable
	// ---->	currentstate = userinput; if we try that we can see the problem
	currentstate = (statesone)userinput;

	switch (currentstate) {
	case working :
		cout << "you are working";
	case failed :
		cout << "you failed ";
	case stable :
		cout << "you are working stable";
	case not_stable :
		cout << "you are not working stable";
	}


}

//TYPEDEF 
#include <iostream>
using namespace std;

typedef int kilometer;

kilometer main() {

	kilometer cairns =900, brisbane, melbourne;
	cout << "Sydney to Cairns :" << cairns << "km";
	


}






//PART 2

#include <iostream>
using namespace std;
#include <algorithm>

//Asked to array size 
// create a array 
// For example 10  program has to ask 10 times the values of array
// Display the array via sort element


int main() {

	int arraySize;
	cout << "Enter Array Size :";
	cin >> arraySize;

	const int constantArray = 100;
	cout << "Array will hold max 100 elements\n";

	int values[constantArray] = {};

	for (int i = 0; i < arraySize; i++) {
		cout << i + 1 << ". Value of array = ";
		cin >> values[i];
	}

	cout << "Your array elements :";
	for (int m = 0; m < arraySize; m++) {
		cout << " " << values[m];
	}


	cout << "\n";
	sort(values, values + arraySize);

	cout << "Sorting array using insertion sort ...\n";
	cout << "Array after sorting :";
	for (int m = 0; m < arraySize; m++) {
		cout << values[m] << " ";
	}



}
/*values: This is a pointer to the beginning of your array.
values + arraySize: This is a pointer to the end of the part of
the array you want to sort — not the end of the entire 100-element
array, just the part the user entered.
So you're telling sort to sort from index 0 to arraySize - 1.*/









#include <iostream>
using namespace std;


int main()
{

	int temp;
	int inputsAmount;

	cout << "Have many inputs do you wanna use :";
	cin >> inputsAmount;
	int inputs;
	int array[100] = { };

	for (int m = 0; m < inputsAmount; m++) {
		cout << m + 1 << ". Elements of your array :";
		cin >> inputs;
		array[m] = inputs;

	}


	for (int i = 0; i < inputsAmount - 1; i++) {
		for (int j = i + 1; j < inputsAmount; j++) {
			if (array[i] > array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	for (int i = 0; i < inputsAmount; i++) {
		cout << array[i] << " ";
	}
}

