#include<iostream>
using namespace std;

int part(int a[], int si, int ei){
    int counter=0;
    int elem=a[si];
    for(int i=si; i<ei; i++){
        if (a[i]<a[si]){
            counter++;
        }
    }
    swap(a[si],a[si+counter]);

    int i=si;
    int j=ei-1;
    while(i<=j){
        if (a[i]<elem){
            i++;
        }
        else if(a[j]>elem){
            j--;
        }
        else{
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    return counter+si;
}

void quicksort(int a[], int si, int ei){
    if (si>=ei){
        return;
    }
    int pivot=part(a,si,ei);
    quicksort(a,si,pivot);
    quicksort(a,pivot+1,ei);
}

int main(){
    int a[7]={0,2,7,8,1,3,6};
    quicksort(a,0,7);
    for(int i=0; i<7; i++){
        cout<<a[i]<<" ";
    }
}

