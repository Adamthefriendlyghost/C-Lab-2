//Dice Rolls

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	srand(time(0));
	int Input = 1;
	int counter2 = 0;
	int counter = 0;

	while (Input !=0) {

		
		counter2 = counter2 + 1;
		int Die = 0;

		while (Die != 6) {

			counter = counter + 1;
			Die = rand() % 6 + 1;
			cout << Die;
			cout << endl;

		}
		
		cout << "The average number of rolls needed to reach 6 is: " << counter / counter2;
		cout << "Do you want to Continue?";
		cin >> Input;
	}

	return 0;
}