//Ninety-nine Song

#include <iostream>
using namespace std;

int main() {

	for (int i = 99; i > 0; i--) {

		cout << endl;
		cout << i << " bottles of beer on the wall, " << i << " bottles of beer.";
		cout << endl;
		cout << "Take one down, pass it around, " << i - 1 << " bottles of beer on the wall.";
		cout << endl;

	}

	cout << endl;
	cout << "No more bottles of beer on the wall, no more bottles of beer";
	cout << endl;
	cout << "Go to the store and buy some more, 99 bottles of beer on the wall.";
	cout << endl;

	return 0;
}