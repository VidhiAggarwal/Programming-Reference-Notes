#include <iostream>
using namespace std;

void increment(int x) {
	x++;
	cout << x << endl;
}

int main() {
	int i = 10;
	cout << i << endl;
	increment(i);
	cout << i << endl;
}

