#include<iostream>
using namespace std;

void insertion_sort(int input[], int size, int start_index){

    if (start_index>=size){
        return;
    }
    for(int i=0; i<start_index; i++){
        if (input[start_index]<input[i]){
            swap(input[start_index],input[i]);
            break;
        }
    }
    return insertion_sort(input, size , start_index+1);
}

int main(){
    int arr[5]={1,7,3,4,5};
    insertion_sort(arr,5,0);

    cout<<endl<<"sorted array is : "<<endl;

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

