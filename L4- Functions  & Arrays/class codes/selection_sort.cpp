#include <iostream>
using namespace std;

int main() {
	int a[100];
	cout << a << endl;
	cout << "Enter size of array" << endl;
	int n;
	cin >> n;

	int i = 0;
	while (i < n) {
		int input;
		cout << "Enter " << i << "th number" << endl;
		cin >> input;
		a[i] = input;
		i++;
	}

	i = 0;
	while (i < n) {
		// Find element for ith position
		int min = a[i];
		int minIndex = i;
		int j = i;
		while (j < n) {
			if (a[j] < min) {
				min = a[j];
				minIndex = j;
			}
			j++;
		}
		a[minIndex] = a[i];
		a[i] = min;
		i++;
	}










}

