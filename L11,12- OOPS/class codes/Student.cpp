#include <iostream>
using namespace std;
class Student {
	int roll_number;

	public:
	char* name;
	Student(char* n): roll_number(0) {
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	Student(Student const & s): roll_number(s.roll_number) {
		name = new char[strlen(s.name) + 1];
		strcpy(name, s.name);
	}

	char* getName() {	
		return name;
	}

	void setName(char* n) {
		delete [] name;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	int getRollNumber() {
		return roll_number;
	}
	void setRollNumber(int r) {
		//roll_number = r;
	}

	~Student() {
		if (name != NULL) {
			delete [] name;
		}
	}

};

int main() {

	int b[10];
	int* bptr = new int[10];

	char a[] = "Ankush";
	Student* sPtr = new Student(a);
	Student* sPtr2 = new Student(*sPtr);

	Student first(a);
	Student second(first);

	cout << first.getName() << endl;
	cout << second.getName() << endl;

	second.name[2] = 'u';
	second.name[3] = '\0';
	cout << first.getName() << endl;
	cout << second.getName() << endl;
	delete sPtr;
	return 0;	







	Student s3(a);
	cout << s3.getName() << endl;
	a[0] = 'A';
	a[1] = 'n';
	a[2] = 'u';
	a[3] = '\0';
	Student s4(a);
	cout << s3.getName() << endl;
	cout << s4.getName() << endl;

	cout << "In main" << endl;
	Student s1(a);
	s1.setRollNumber(100);
	cout << s1.getRollNumber() << endl;
	
	Student s2(s1);
	cout << s2.getRollNumber() << endl;
	s2.setRollNumber(1000);
	cout << s1.getRollNumber() << endl;
	cout << s2.getRollNumber() << endl;

	// s1 rollNumber = 100, s2 rollNumber 1000

	s2 = s1;
	cout << s1.getRollNumber() << endl;
	cout << s2.getRollNumber() << endl;
}
