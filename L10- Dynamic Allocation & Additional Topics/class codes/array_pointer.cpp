#include <iostream>
using namespace std;

int main() {
	int i = 10;
	int* ptr = &i;
	cout << ptr << endl;
	cout << &ptr << endl;
	int a[100];
	cout << a << endl;
	cout << &a << endl;
	ptr = a;
	ptr = a + 1;
	a++;
	char c[] = "abcd";

	char* ptrc = "abcd";



}

