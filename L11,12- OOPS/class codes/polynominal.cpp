#include <iostream>
using namespace std;

class Polynomial {
	// [1,0,2,0,3] represents 1 + 2*x^2 + 3*x^4
	int* coeff;
  int maxDegree;

	public:

	Polynomial() {
		coeff = new int[20];
		for (int i = 0; i < 20; i++) {
			coeff[i] = 0;
		}
		maxDegree = 19;
	}

	Polynomial(Polynomial const & p) {
		coeff = new int[p.maxDegree + 1];
		for (int i = 0; i <= p.maxDegree; i++) {
			coeff[i] = p.coeff[i];
		}
		maxDegree = p.maxDegree;
	}

	void setCoeff(int deg, int value) {
		if (deg <= maxDegree) {
			coeff[deg] = value;
			return;
		} else {
			int* temp = new int[deg + 1];
			int i = 0;
			for (; i <= maxDegree; i++) {
				temp[i] = coeff[i];
			}
			for (; i <= deg; i++) {
				temp[i] = 0;
			}
			temp[deg] = value;
			maxDegree = deg;
			delete [] coeff;
			coeff = temp;
		}
	}

	void add(Polynomial const & p) {

	}

	int evaluate(int x) {

	}

};

int main() {

}
