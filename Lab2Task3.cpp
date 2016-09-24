//Nested for loops

#include <iostream>
using namespace std;

int main() {

	for (int Outer = 1; Outer <= 4; Outer++) {

		cout << endl;
		cout << Outer << " Times Table" << endl;

		for (int i = 0; i <= 12; i++) {

			cout << Outer << " x " << i << " = " << Outer * i << endl;
		}
	}

	return 0;
}