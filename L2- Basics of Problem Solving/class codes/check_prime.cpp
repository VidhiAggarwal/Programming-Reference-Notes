#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter number" << endl;
	cin >> n;

	int d = 2;
	while (d < n) {
		if (n % d == 0) {
			cout << "Not prime" << endl;
			return 0;
		}
		d = d + 1;
	}	
	cout << "Prime" << endl;
	return 0;
}
