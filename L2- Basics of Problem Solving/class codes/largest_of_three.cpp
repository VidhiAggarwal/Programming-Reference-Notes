#include <iostream>
using namespace std;

int main() {
	int a,b,c;

	cout << "Enter the numbers" << endl;
	cin >> a >> b >> c;
	
	if (a >= b && a>= c) {
		cout << "Largest is " << a << endl;
		return 0;
	} else if (b >= a && b >= c) {
		cout << "Largest is " << b << endl;
		return 0;
	} else {
		cout << "Largest is " << c << endl;
		return 0;
	}
}
