#include <iostream>
using namespace std;

char* strtok_1(char* str, char del) {
	static char* input = NULL;
	if (str != NULL) {
		input = str;
	}
	if (input == NULL) {
		return NULL;
	}

	cout << "Current input " << input << endl;
	char* output = new char[strlen(input)];
	int i = 0;
	for (i = 0; i < strlen(input); i++) {
		if (input[i] == del) {
			output[i] = '\0';
			input = input + i + 1;
			return output;
		} 
		output[i] = input[i];
	}
	output[i] = '\0';
	input = NULL;
	return output;
}

int main() {
	char c[] = "This is a test string";
	char* tok = strtok_1(c, ' ');
//	while (tok != NULL) {
//		cout << tok << endl;
//		tok = strtok_1(NULL, ' ');
//	}
	tok = strtok_1(c, ' ');
	cout << tok << endl;
	tok = strtok_1("another string", ' ');
	cout << tok << endl;
}

