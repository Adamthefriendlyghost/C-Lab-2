//Module Code + Marks Program

#include <iostream>
using namespace std;

int main() {

	int ModuleCode = 0; //Store Module Code
	int RollingSave = 0;
	int Stop = 0;
	int counter = 0;

	cout << "Please Enter the Module Code: ";
	cin >> ModuleCode;

	while (Stop != -1) {

		int Mark = 0;
		counter = counter + 1;
		cout << "Enter Mark " << counter << "; "; 
		cin >> Mark;

		RollingSave = RollingSave + Mark;

		cout << "Would you like to continue? (Enter 1 for Yes, -1 for No) ";
		cin >> Stop;

	}
	cout << endl;
	cout << "The average score for Module: " << ModuleCode << " is: " << RollingSave / counter;

}