#include <iostream>
using namespace std;

int main() {
	int i = 10;
	int* ptr = &i;
	char* ptrc = (char*)ptr;
	cout << *ptrc << endl;
	cout << *ptr << endl;
}

