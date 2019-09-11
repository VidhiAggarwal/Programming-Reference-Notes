#include <iostream>
using namespace std;

int string_len(char input[]) {
	int i = 0;
	while (input[i] != '\0') {
		i++;
	}
	return i;
}


void substring(char input[], int i, int j, char output[]) {
	// copy data from input[i...j] to output[0...]
}

bool is_palindrome(char input[]) {
	int n = string_len(input);
	int start_index = 0;
	int end_index = n - 1;
	while (start_index < end_index) {
		if (input[start_index] != input[end_index]) {
			return false;
		}
		start_index++;
		end_index--;
	}
	return true;
}

int main() {

	char input[100];
	cin >> input;
	cout << string_len(input);

	char string[100];
/*	cin >> string;
	string[3] = 'd';
	string[1] = '0';
	string[2] = 0;
	cout << "Printing null char" << endl;
	cout << '\0' << endl;
	cout << string;
*/
	int n;
	cin >> n;
	int i;
	for (i = 0; i < n; i++) {
		string[i] = cin.get();
	}
	string[i] = '\0';
	cout << string << endl;	

}
