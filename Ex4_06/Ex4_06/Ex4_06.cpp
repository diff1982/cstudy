/************************************************************************/
/* Ex4_06.cpp Exercising pointers                                                                     */
/************************************************************************/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::hex;
using std::dec;

int main(){
	long* pnumber;
	long number1{ 55 }, number2{ 99 };

	pnumber = &number1;
	*pnumber += 11;
	cout << endl 
		<< "number1 = " << number1 
		<< "  &number1 = " << hex << pnumber;

	pnumber = &number2;
	number1 = *pnumber * 10;
	cout << endl
		<< "number1 = " << dec << number1
		<< " pnumber = " << hex << pnumber
		<< " *pnumber = " << dec << *pnumber;
	cout << endl;
	system("pause");
	return 0;
}