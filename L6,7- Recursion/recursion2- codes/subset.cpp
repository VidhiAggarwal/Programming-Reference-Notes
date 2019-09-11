#include<iostream>
using namespace std;

int input[3]={3,2,5};

void print(int arr[], int sze){
    for(int i=0; i<=sze; i++){
        if (arr[i]==1)
            cout<<input[i];
    }
    cout<<endl;
}

void subsets(int bitsarr[], int pos, int sze)
{
    if(pos == sze){
        bitsarr[pos]=0;
        print(bitsarr, sze);
        bitsarr[pos]=1;
        print(bitsarr, sze);
        return;
    }
    bitsarr[pos]=0;
    subsets(bitsarr, pos+1, sze);
    bitsarr[pos]=1;
    subsets(bitsarr, pos+1, sze);
    return;
}




int main()
{
    int arr[3] = {};
    int pos = 0;
    subsets(arr, pos, 2);
    return 0;
}
