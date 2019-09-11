#include <iostream>
using namespace std;

int sum (int a[], int size, int startIndex = 0) {
	if (startIndex == size)
		return 0;
	return a[startIndex] + sum(a, size, startIndex + 1);
}	

void defaultDemo(int a = 0, int b = 0) {
	cout << "a " << a << endl;
	cout << "b " << b << endl;
}

inline void increment(int a) {
	a++;
}

inline int max(int a, int b) {
	return (a > b)? a: b;
}

int main() {
	int x = 100;
	increment(x);
	cout << x << endl;

	int a[100];

	defaultDemo(10,20);
	defaultDemo(20);
	defaultDemo();

	//cout << sum(a, 100);

	int maxSoFar = a[0];
	for (int i = 0; i < 100; i++) {
		maxSoFar = max(maxSoFar, a[i]);
	}
	
}

