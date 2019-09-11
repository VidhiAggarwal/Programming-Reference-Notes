#include <iostream>
using namespace std;

void printLargestUniqueSS(char input[]) {
	int largestSubStringLength = 0;
	int largestSubStringStart = 0;
	int currentSubStringStart = 0;
	int currentSubStringEnd = 0;
	int lastIndex[256];
	for (int i = 0; i < 256; i++) {
		lastIndex[i] = -1;
	}

	while (input[currentSubStringEnd] != '\0') {
		char currentChar = input[currentSubStringEnd];
		if (lastIndex[currentChar] != -1 &&
				lastIndex[currentChar] >= currentSubStringStart) {
			int currentSubStringLength = 
				currentSubStringEnd - currentSubStringStart;
			if (currentSubStringLength > largestSubStringLength) {
				largestSubStringStart = currentSubStringStart;
				largestSubStringLength = currentSubStringLength;
			}
			currentSubStringStart = lastIndex[currentChar] + 1;
		}
		lastIndex[currentChar] = currentSubStringEnd;
		currentSubStringEnd++;
	}

	int currentSubStringLength = 
		currentSubStringEnd - currentSubStringStart;
	if (currentSubStringLength > largestSubStringLength) {
		largestSubStringStart = currentSubStringStart;
		largestSubStringLength = currentSubStringLength;
	}

	cout << largestSubStringLength << endl;
	for (int i = 0; i < largestSubStringLength; i++) {
		cout << input[largestSubStringStart + i];
	}
	cout << endl;
}

int main() {
	char input[100];
	cout << "Enter input" << endl;
	cin >> input;
	printLargestUniqueSS(input);
}
