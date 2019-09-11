#include <iostream>
#define PI 3.14
#define STRING "pi"
using namespace std;

void printx(int const * x) {
	// not allowed
	//(*x)++;
	cout << *x << endl;
}

int main() {
	int i = 100;
	double pivalue = PI*i;
	cout << STRING << endl;
	cout << pivalue << endl;
	int const * ptr = &i;
	i++;
	// not allowed
	//(*ptr)++;

	int * const ptr2 = &i;
	(*ptr2)++;
	int j = 109;
	// not allowed
	//ptr2 = &j;

	int const * const ptr3 = &i;
	// not allowed
	//ptr3 = &j;
	//(*ptr3)++;
}

