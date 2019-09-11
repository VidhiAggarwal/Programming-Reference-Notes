#include <iostream>
using namespace std;

int main() {
	int i = 0;
	
	while (i < 0) {
		cout << i << endl;
		i++;
	}
	i = 0;
	do {
		cout << i << endl;
		i++;
	} while (i < 0);
}

