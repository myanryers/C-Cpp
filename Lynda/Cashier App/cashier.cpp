/*
Lynda.com - Learning C++
Challenge - Make a cashier app

Description:
- Simulates a cash register.
- Ask for the price of an item and the payment amount
- Print change in dollars, quarters, dimes, nickels, pennies
- Allow user to input multiple transactions

Hint: modulus
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{

	// variable declarations
	// response from the customer to enter another transaction
	char response = 'n';
	// item price
	float price = 0.0;
	// payment amount
	float payment = 0.0;
	// total change before itemizing
	int change = 0;
	// variables to hold the change amounts
	int dollars = 0,
		cents = 0,
		quarters = 0,
		dimes = 0,
		nickels = 0,
		pennies = 0;

	// do-while loop for the cashier app
	// ensures to execute once
	do
	{

		// get the price of the item
		cout << "What is the price of this item? --> ";
		cin >> price;

		// get the payment amount
		cout << "How will you be paying? --> ";
		cin >> payment;

		// get the total change amount
		change = 100*(payment - price);
		dollars = change/100;
		change = change % 100;
		quarters = change/25;
		change = change % 25;
		dimes = change/10;
		change = change % 10;
		nickels = change/5;
		change = change % 5;
		pennies = change;

		cout << "Total Change: " << (payment - price) << fixed << setprecision(2) << endl;
		cout << "dollars  : " << dollars << endl;
		cout << "quarters : " << quarters << endl;
		cout << "dimes    : " << dimes << endl;
		cout << "nickels  : " << nickels << endl;
		cout << "pennies  : " << pennies << endl;

		// get the user's response
		cout << "Do you have another transaction? (y/n) ";
		cin >> response;
		while (response != 'y' && response != 'Y' &&
		       response != 'n' && response != 'N') {
			cout << "Invalid response." << endl;
			cout << "Do you have another transaction? (y/n) ";
			cin >> response;
		}

	} while (response == 'y' || response == 'Y');

	return 0;
}
