#include<iostream>
using namespace std;

void all_subsets(int arr[], int index, int sze){
    if (sze == 0)
        return;
    if (index == sze)
        return;
    all_subsets(arr, index+1, sze);
    cout<<arr[index] <<endl;

//    for(int i=0; i<sze-index; i++){
//        all_subsets(arr, index+1, sze);
//
//    }

    all_subsets(arr, index+1, sze);

    cout<<endl;
    return;
}

int main(){
    int arr[3]={2,1};
    all_subsets(arr,0,2);
}
