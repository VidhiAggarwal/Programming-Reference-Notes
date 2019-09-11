#include <iostream>
using namespace std;

int main() {
	int n,p;
	cout << "Enter n" << endl;
	cin >> n;
	
	cout << "Enter precision" << endl;
	cin >> p;
	
	int currentPrecision = 0;

	double i = 0;
	double increment = 1;
	while (currentPrecision <= p) {
		while (i*i <= n) {
			i = i + increment;
		}
		i = i -increment;
		increment = increment /10;
		currentPrecision = currentPrecision + 1;
	}
	cout << "Answer is " << i << endl;
}
