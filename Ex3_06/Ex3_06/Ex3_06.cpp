/************************************************************************/
/* Ex3_06.cpp Multiple case actions                                                                     */
/************************************************************************/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	char letter{};
	cout << endl
		<< "Enter a small letter: ";
	cin >> letter;

	switch (letter*(letter>='a'&&letter<='z'))
	{
	case 'a':case'e':case'i':case'o':case'u':
		cout << endl << "You entered a vowel!" << endl;
		break;
	case 0:
		cout << endl << "This is not a small letter.";
		break;
	default:  cout << "You entered a consonant.";
		break;
	}
	cout << endl;
	return 0;
		
}