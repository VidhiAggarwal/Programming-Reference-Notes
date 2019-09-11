#include <iostream>
using namespace std;

int main() {
	long int p = 100;
	int r = 10;
	int t = 10;
	cout << p << endl;
	cout << "size of int is " << sizeof(p) << endl;
	float f = 10.6;
	cout << "size of float is " << sizeof(f) << endl;

	int si = (p * r * t)/100;
	
	cout << "Simple interest is " << si << endl;

}
