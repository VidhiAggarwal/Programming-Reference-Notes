#include <iostream>
using namespace std;

int g;


int max(int a, int b) {
	static int count = 0;
	count++;
	cout << count << endl;
	return 0;
}


int sum(int a, int b = 0) {
	return (g++)*(a + b);
}

int main() {
	for (int i = 0; i < 10; i++) {
		max(5,6);
	}	
	int a = 10;
	int b = 100;
	g = 10;
	cout << sum(a, b) << endl;
	cout << g << endl;
}

