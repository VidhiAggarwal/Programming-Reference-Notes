#include<iostream>
using namespace std;

int pwrlogn(int x,int n){
    if(n==0){
        return 1;
    }
    int p=pwrlogn(x,n/2);
    if(n%2==0){
        return p*p;
    }
    else{
        return x*p*p;
    }
}

int main(){
    cout<<pwrlogn(3,4);
}
