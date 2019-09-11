#include<iostream>
using namespace std;
class Complex {
    float real;
    float imaginary;
    public:
    Complex() : real(0), imaginary(0) {}
    Complex(float r, float i) : real(r), imaginary(i) {}
    Complex(Complex const & T) : real(T.real), imaginary(T.imaginary) {
    }
    Complex operator=(Complex const & T) {
        real = T.real;
        imaginary = T.imaginary;
        return *this;
    }
    void print() const {
        cout << this << endl;
        cout << real << " + " << imaginary << " i " << endl;
    }
    void updateReal(float r) {
        real = r;
    }
    void updateImaginary(float i) {
        imaginary = i;
    }
    Complex & operator+=(Complex b) {
        real+=b.real;
        imaginary+= b.imaginary;
        return *this;
    }
    Complex operator+(Complex b) {
        Complex ans;
        ans.real = real + b.real;
        ans.imaginary = imaginary + b.imaginary;
        return ans;
    }
    Complex & operator~() {
        imaginary = -imaginary;
        return *this;
    }
    Complex & operator++() {
    }
    Complex & operator++(int x) {
    }
    friend Complex operator+(Complex, float);
};
Complex operator+(Complex a, float b) {
    Complex ans;
    ans.real = a.real + b;
    ans.imaginary = a.imaginary;
    return ans;
}
int main() {
    Complex a(5, 10), b(10, 20);
    cout << &a << endl;
    a.print();
    return 0;
}
