#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet

int main()
{

	cout << "Please enter the width of the room: ";
	int room_width {0};
	cin >> room_width;
	
	cout << "Please enter the length of the room: ";
	int room_length {0};
	cin >> room_length;

	cout << "The area of the room is " << room_width * room_length << " square feet." << endl;

	return 0;
}