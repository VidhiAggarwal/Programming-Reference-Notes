#include <iostream>
using namespace std;

void print_array(int a[], int n) {
	int i = 0;
	while (i < n) {
		cout << a[i] << endl;
		i++;
	}
}

void selection_sort(int a[], int n) {
	int i = 0;
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

int takeInput(int a[]) {
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
	return n;
}

int main() {

	int a[100];
	cout << a << endl;
	int n = takeInput(a);
	print_array(a, n);
	cout << "Sorting " << endl;
	selection_sort(a,n);
	cout << "Sorting called" << endl;
	print_array(a, n);
	int max = find_max(a, n);
	cout << "Max is " << max << endl;
	return 0;
}
