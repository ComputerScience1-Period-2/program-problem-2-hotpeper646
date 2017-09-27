/* Heading
Yugi Sosa 9/25/17 Period 2
Assignment Name : Take in Data
Display Data, Accept User Response, Display Changed Data
*/

// Libraries
#include <iostream> //* gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> //* gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std;

// Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	// Variables
	int axes_missed;
	char choice_answer;
	// set bool to false and assume they didint choose 'A'
	bool answerMatcheds = false;
	double piGuess;

	int calc_1, calc_2, calc_3, calc_4, calc_5; // Hold int values for calculation.

	// User Queries
	cout << "How many axe's have you \"Missed\" : ";
	cin >> axes_missed;
	cout << " Which character is better a, b, c, or d? (a/b/c/d) : ";
	cin >> choice_answer;
	if (choice_answer == 'a' || choice_answer == 'A') {
		answersMatcheds = true;
	}
	cout << "What is pi : ";
	cin >> piGuess;

	cout << "Give me 3 whole numbers : " << "\n";
	cout << "Number 1 : ";
	cin >> calc_1;
	cout << "Number 2 : ";
	cin >> calc_2;
	cout << "Number 3 : ";
	cin >> calc_2;

	cout << "You've missed, " << axes_missed; << "amount of axes. \n";
	cout << boolalpha << "I think that is << answersMatcheds << " is the best character too. " << endl;
	cout << "So you think pie is " << piGuess << '\n';

	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
	calc_4 = calc_2 * calc_3
		cout << calc_2 << " * " << calc_3 << " = " << calc_4 << endl;


	// Pause
	pause();
}