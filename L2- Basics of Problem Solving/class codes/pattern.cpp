#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter number of rows" << endl;
	cin >> n;

	int row = 1;
	int value = 1;
	while (row <= n) {
		int col = 1;
		while (col <= row) {
			cout << value << ' ';
			value = value + 1;
			col = col + 1;
		}
		row = row + 1;
		cout << endl;
	}

}
