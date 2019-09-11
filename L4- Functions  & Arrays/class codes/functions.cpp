#include <iostream>
using namespace std;

void A() {
	cout << "Inside A" << endl;
}

void B() {
	cout << "Inside B" << endl;
	A();
	cout << "After calling A inside B" << endl;
}

int main() {
	cout << "Inside main" << endl;
	B();
	cout << "After calling B inside main" << endl; 
	return 0;
}
