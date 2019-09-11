#include <iostream>
using namespace std;

char* getCharArray() {
	char* c = new char[20];
	strcpy(c, "Coding Blocks");
	return c;
}

int main() {

	while (true) {
		int a[1000];
	}

	while (true) {
		int* i = new int[1000];
	}
	char* output = getCharArray();
	cout << output << endl;
	delete [] output;
	int staticA[100];

	int size;
	cin >> size;

	int* ii = new int;
	char* c = new char;
	char* cArray = new char[100];
	int* dynamicA = new int[size];
	for (int i = 0; i < size; i++) {
		dynamicA[i] = i;
	}

	for (int i = 0; i < size; i++) {
		cout << dynamicA[i] << endl;
	}
	delete ii;
	delete c;
	delete [] cArray;
	delete [] dynamicA;
}

