#include <iostream>
using namespace std;

int main() {
  cout << "Enter n" << endl;
	int n;
	cin >> n;

	int i = 2;
	while (i <= n) {
		int d = 2;
		bool isPrime = true;
		while (d <= i - 1) {
			if (i % d == 0) {
				isPrime = false;
				break;
			}
			d = d + 1;
		}
		if (isPrime) {
			cout << i << endl;
		}
		i = i + 1;
	}
}
