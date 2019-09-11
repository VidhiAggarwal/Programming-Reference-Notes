#include <iostream>
using namespace std;

int main() {
	char current_char;
	current_char = cin.get();
	int count = 0;

	char c = '1';

	if (c >= '0' && c <= '9') {
		cout << "Digit" << endl;
	}


	while (current_char != 36) {
		count++;
		current_char = cin.get();
	}
	cout << count << endl;
}
