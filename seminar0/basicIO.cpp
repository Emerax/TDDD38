#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	int intInput{};
	string stringInput{};
	float floatInput{};
	char charInput[256];
	cout << "Enter one integer: ";
	cin >> intInput;
	cout << "You entered the number: " << intInput << endl << endl;
	cin.ignore();

	cout << "Enter four integers: ";
	getline(cin, stringInput);
	cout << "You entered the numbers: " << stringInput << "\n" << "\n";

	cout << "Enter one real and one integer number: ";
	cin >> floatInput >> intInput;
	cout << "The real is: " << setfill('.') << setw(24) << floatInput << endl;
	cout << "The integer is: " << setfill('.') << setw(21) << intInput << endl << endl;

	cout << "Enter a character: ";
	cin >> charInput;
	cout << "You entered: " << charInput << endl << endl;

	cout << "Enter a word: ";
	cin.ignore();
	cin.getline(charInput, 256);
	cout << "The word '" << charInput <<"' has " << cin.gcount() - 1 << " characters!" << endl << endl;

	cout << "Enter an integer and a word: ";
	cin >> intInput >> stringInput;
	cout << "You entered '" << intInput << "' and '" << stringInput << "'." << endl << endl;

	cout << "Enter a character and a word: ";
	cin >> charInput >> stringInput;
	cout << "You entered the string \"" << stringInput << "\" and the character '" << charInput << "'." << endl << endl;

	cout << "Enter a word and a real number: ";
	cin >> stringInput >> floatInput;
	cout << "You entered \"" << stringInput << "\" and " << floatInput << "\"." << endl << endl;

	cout << "Enter a text-line: ";
	cin.ignore();
	getline(cin, stringInput);
	cout << "You entered: \"" << stringInput << "\"." << endl << endl;
}
