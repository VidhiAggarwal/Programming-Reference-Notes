#include <iostream>
using namespace std;

int main() {
	int f = 0;
	int max;
	cout << "Enter max f value" << endl;
	cin >> max;
	while (f <= max) {
		// Fah to cel formula
		/* abhdhdgd
			 shhjhjhd
		*/
		int c = (5.0/9)*(f-32);
		cout << f << "\t" << c << endl;
		f += 20;
	}
}
