#include <iostream>

using namespace std;

int main()
{
	//cout << "Hello world!" << endl;
	
//	cout << "Hello";
//	cout << "World" << endl;

	//cout << "Hello\nWorld\n";
	//cout << "Hey\nWhat's\nUp?\n";
	
	int num1;
	int num2;
	double num3;
	
//	cout << "Enter an integer: ";
//	cin >> num1;
//	cout << "You entered: " << num1 << endl;
	
	cout << "Enter the first int: " << endl;
	cin >> num1;
	
	cout << "Enter the second int: " << endl;
	cin >> num2;
	
	num3 = num1 + num2;
	
	cout << num1 << " + " << num2 << " = " << num3 << endl; 
	
	return 0;
}