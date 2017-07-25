/***********
* Ex2_04.cpp
* Using escape sequences
**********/
#include <iostream>

using std::cout;

int main(){
	char newline('\n');
	cout << newline;
	cout << "\"We\'ll make our escapes in sequence\",he said,";
	cout << "\n\tThe Program\'s over, it\'s time to make a beep beep.\a\a";
	cout << newline;
	return 0;
}