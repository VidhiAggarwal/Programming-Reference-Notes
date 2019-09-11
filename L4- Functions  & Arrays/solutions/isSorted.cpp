#include<iostream>
using namespace std;

bool isSorted(int a[], int s){
 if (s==0||s==1){
    return true;
 }
 if (a[0]>a[1]){
    return false;
 }
 return isSorted(a+1, s-1);
}

int main(){
int arr[]={1,2,3,4,1};
cout<<isSorted(arr,5);
return 0;
}
