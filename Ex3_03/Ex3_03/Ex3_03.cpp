/************************************************************************/
/* Ex3_03.cpp
/* Testing for letter using logical operators
/************************************************************************/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
	char letter{};
	cout << endl
		<< "Enter a character: ";
	cin >> letter;

	if (((letter >= 'A') && (letter <= 'Z')) || ((letter >= 'a') && (letter <= 'z')))
	{
		cout << "You entered a letter" << endl;
	} 
	else
	{
		cout << endl
			<< "You didn't enter a letter!" << endl;
	}
	return 0;
}