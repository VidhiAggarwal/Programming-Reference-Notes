#include <iostream>
using namespace std;

int main() {
	char a[100];
	cin >> a;
	cout << strlen(a) << endl;
	cout << a << endl;

	char b[100];
	cin.getline(b, 20);
	cout << strlen(b) << endl;
	cout << b << endl;
}
