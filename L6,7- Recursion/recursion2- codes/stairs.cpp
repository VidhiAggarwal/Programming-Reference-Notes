#include<iostream>
using namespace std;

void print(int arr[], int sze){
    for(int i=0;i<sze; i++){
        cout<<arr[i];
    }
    cout<<endl;
}

void stairs(int n,int arr[], int pos)
{
    if(n<0){
        return;
    }
    if(n==0){
        print(arr,pos);
    }
     arr[pos]=1;
     stairs(n-1,arr,pos+1);
     arr[pos]=2;
     stairs(n-2,arr,pos+1);
     arr[pos]=3;
    stairs(n-3, arr,pos+1);
    return;
}

int main()
{
    int arr[10]={0};
    stairs(3,arr,0);
    return 0;
}


