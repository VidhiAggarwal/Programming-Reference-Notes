#include <iostream>
using namespace std;

int power(int x, int y) {
	int i = 0;
	int output = 1;
	while (i < y) {
		output = output * x;
		i++;
	}
	return output;
}

int powerUseLess() {
	int x,y;
	cout << "Enter x y" << endl;
	cin >> x >> y;
	int i = 0;
	int output = 1;
	while (i < y) {
		output = output * x;
		i++;
	}
	return output;
}

bool isArmstrong(int n) {
	int numDigits = 0;

	int temp = n;

	while (temp > 0) {
		numDigits++;
		temp = temp/10;
	}

	int powerSum = 0;

	temp = n;
	
	while (temp > 0) {
		int currentDigit = temp % 10;
		int i = 0;
		int currentDigitPower = power(currentDigit, numDigits);
		powerSum = powerSum + currentDigitPower;
		temp = temp/10;
	}
	
	if (powerSum == n) {
		return true;
	} else {
		return false;
	}
	
}

int main() {
	int n;
	int answer1 = powerUseLess();
	cout << "answer1 " << answer1 << endl;
	cin >> n;
	bool answer = isArmstrong(n);
	if (answer) {
		cout << "Armstrong" << endl;
	} else {
		cout << "No " << endl;
	}
	return 0;
}
