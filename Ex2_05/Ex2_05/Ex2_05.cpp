/**********
* Ex2_05.cpp
* Calculating how many rolls of wallpaper are required for a room
**********/
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	double height{}, width{}, length{};
	double perimeter{};
	const double rollWidth(21.0);
	const double rollLength(12.0*33.0);
	
	int strips_per_roll {};
	int strips_reqd {};
	int nrolls{};
	
	cout << endl;
	cout << "Enter the height of the room in inches:";
	cin >> height;

	cout << endl;
	cout << "Now enter the length of the room in inches:";
	cin >> length;

	strips_per_roll = length / height;
	perimeter = 2.0*(length + width);
	strips_reqd = perimeter / rollWidth;
	nrolls = strips_reqd / strips_per_roll;

	cout << endl;
	cout << "For your room you need " << nrolls << " rolls of wall paper.";
	cout << endl;
	return 0;

}