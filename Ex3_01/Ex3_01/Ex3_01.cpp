/*************************
* Ex3_01.cpp
* A nested if demonstration
***************************/
#include <iostream>

using std::endl;
using std::cout;
using std::cin;

int main(){
	char letter{};
	cout << "Enter a letter: ";
	cin >> letter;
	if (letter>='A')
	{
		if (letter<='Z')
		{
			cout << endl
				<< "You entered a capital letter!"
				<< endl;
			return 0;
		}
	}
	if (letter>='a')
	{
		if (letter<='z')
		{
			cout << endl
				<< "You entered a lowercase letter."
				<< endl;
			return 0;
		}
	}
	cout << endl << "You did not enter a letter!"
		<< endl;
	return 0;

}