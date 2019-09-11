#include <iostream>
using namespace std;

int main() {
	int i = 10;

	int b = i;



	cout << i++;
	cout << ++i;

	int a = i++;
	cout << a << endl;
	cout << i << endl;
	i = 10;
	int b = ++i;
	cout << b << endl;
	cout << i << endl;
}

