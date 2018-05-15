// my first C++ program
// simple user I/O and printing variables
#include <iostream>

// namespace declaration
using namespace std;

int main(int argc, char const *argv[])
{
	// variables
	int i, j;
	cout << "Hello World!" << endl;
	cout << "Please enter an integer: ";
	cin >> i;
	cout << "Please enter another integer: ";
	cin >> j;
	cout << "Thank you for entering the following:" << endl;
	cout << "i = " << i;
	cout << ", j = " << j << endl;
	cout << "Bye!" << endl;

	return 0;
}