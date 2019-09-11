#include<iostream>
using namespace std;


void Sort012( int arr[], int sze){
    int i=0;  // all numbers before i are zeroes.. or beg of 1s.. curr i is 1..
    int j=0;  // all numbers between i and j are 1s..curr j is unknown beg..
    int k=sze-1; // all numbers after k are 2s.. curr k is unknown end
    while (j<=k){
        if (arr[j]==0){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else if(arr[j]==1){
            j++;
        }
        else{
            swap(arr[j], arr[k]);
            k--;
        }
    }
}

int main(){
    int a[10]={0,1,1,0,1,2,1,2,0,1};
    Sort012(a,10);
    for(int i=0; i<10; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
