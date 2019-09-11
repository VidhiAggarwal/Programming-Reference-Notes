#include<iostream>
using namespace std;
int main() {
    int a = 10, b = 4;
    //cout << (a+b)++ << endl;
    cout << (a = b)++ << endl;
    cout << a << endl;
    cout << b << endl;
    return 0;
}
