/************************************************************************/
/* Using the extended if
/* Ex3_02.cpp
/************************************************************************/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	long number{};
	cout << endl;
	cout << "Enter an integer number less than 2 billion: ";
	cin >> number;

	if (number%2L)
	{
		cout << endl
			<< "Your number is odd." << endl;
	} 
	else
	{
		cout << endl
			<< "Your number is even." << endl;		
	}
	return 0;
}