// new_console_app_270525.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Every time if i don`t wanna use std exaple /std::cout << "Hello World!\n";
// we have to use a method using namespace std;
// cout ---> Console Output



/*
int main()
{
	//std::cout << "Hello World!\n";
	cout << "Hello There";
	cout << "My name is Matt";
}
*/


/*
int main()
{
	cout << "Hello There" << endl; 
	cout << "My name is Matt";
}

Both of them similar 

int main()
{
	//std::cout << "Hello World!\n";
	cout << "Hello There\n";
	cout << "My name is Matt";
*/


int main()
{
	string userName;
	cout << "Hello There" << endl;
	cout << "What is your name ? ";
	cin >> userName;
	cout << "Welcome " << userName << endl;
}
