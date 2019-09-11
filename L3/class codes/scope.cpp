#include <iostream>
using namespace std;

int main() {
	int i = 10;
	if (i == 10) 
		int d = 10;


	if (i == 10) {
		cout << i;
		int i = 13;
		int d = 13;
		cout << i;
	} else {
		int d = 13;
		cout << i;
	}
	cout << i;
}

