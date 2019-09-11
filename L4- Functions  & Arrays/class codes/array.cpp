#include <iostream>
using namespace std;

void print_array(int a[], int n) {
	int i = 0;
	while (i < n) {
		cout << a[i] << endl;
		i++;
	}
}

int find_max(int a[], int n) {
	int i = 0;
	int max = a[0];
	while (i < n) {
		if (a[i] > max) {
			max = a[i];
		}
		i++;
	}	
	return max;
}

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
	
	print_array(a, n);
	cout << "Sorting " << endl;
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
	print_array(a, n);
	int max = find_max(a, n);
	cout << "Max is " << max << endl;
	return 0;
}
