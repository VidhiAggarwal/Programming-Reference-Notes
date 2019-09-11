#include<iostream>
using namespace std;

void print(int arr[], int sze, int input[]){
    for(int i=0; i<=sze; i++){
        if (arr[i]==1)
            cout<<input[i];
    }
    cout<<endl;
}

void subsets(int input[], int ipos, int bitsarr[], int bpos, int sum, int sze)
{
    if(input[ipos] > sum){
        return;
    }

    if(input[ipos] == sum){
        bitsarr[bpos]=1;
        print (bitsarr, sze, input);
        return;
    }
    if(input[ipos]<sum){
        bitsarr[bpos]=1;
        subsets(input,ipos+1, bitsarr, bpos+1, sum-input[ipos],sze);
        bitsarr[bpos]=0;
        subsets(input,ipos+1, bitsarr, bpos+1, sum,sze);
    }
    return;
}

int main()
{
    int input[4]={1,2,3,5};
    int arr[4] = {};
    int pos = 0;
    subsets(input, 0, arr, 0, 5, 3);
    return 0;
}

