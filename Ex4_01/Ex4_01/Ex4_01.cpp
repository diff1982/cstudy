/************************************************************************/
/* Ex4_01.cpp                                                                     */
/************************************************************************/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main(){
	const int MAX{ 20 };
	double gas[MAX];
	long miles[MAX];

	int count{};
	char indicator{ 'y' };

	while (('y'==indicator)||('Y'==indicator)&&count<MAX)
	{
		cout << endl
			<< "Enter gas quantity:";
		cin >> gas[count];
		cout <<"Enter odometer reading : ";
		cin >> miles[count];

		++count;
		cout << "Do you want to enter another(y or n)?";
		cin >> indicator;
	}
	if (count<=1)
	{
		cout << endl << "Sorry - at least tow readings are necessary.";
			return 0;
	}
	for (int i{ 1 }; i < count;i++)
	{
		cout << endl
			<< setw(2) << i << "."
			<< "Gus purchased = "
			<< " resulted in "
			<< (miles[i] - miles[i - 1]) / gas[i] << " miles per gallon.";
	}
	cout << endl;
	return 0;
}