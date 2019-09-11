#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the max number" << endl;
	cin >> n;
	int next = 1;
	while (next <= n) {
		cout << next << endl;
		next = next + 1;
	}
}
