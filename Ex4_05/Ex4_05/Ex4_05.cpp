/************************************************************************/
/* Ex4_05.cpp Storing string in an array                                                                     */
/************************************************************************/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
	char stars[6][80]{
		"Robert Redford", "Hopalong Cassidy", "Lassie",
			"Slim Pickens", "Boris Karloff", "Oliver Hardy"
	};
	int dice{};
	cout << endl
		<< "Pick a lucky star !"
		<< "Enter a number between 1 and 6 :";
	cin >> dice;

	if (dice>=1&&dice<=6)
	{
		cout << endl
		<< "Your lucky star is" << stars[dice - 1];
	}
	else
	{
		cout << endl
			<< "Sorry, you haven't got a lucky star.";
		cout << endl;
	}
	system("pause");
	return 0;
}