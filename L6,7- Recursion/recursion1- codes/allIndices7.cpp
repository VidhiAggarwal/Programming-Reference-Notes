#include<iostream>
using namespace std;

int all_indices_7(int input[], int size, int start_index, int output[]){

    if (start_index>=size){
        return 0;
    }
    int output_size=all_indices_7(input, size , start_index+1, output);

    if (input[start_index]==7){
        output[output_size]=start_index;
        output_size++;
    }
    return output_size;
}

int all_indices_7_1(int input[], int size, int output[]){

    if (size==0){
        return 0;
    }
    int output_size=all_indices_7_1(input+1, size-1, output);

    for(int i=0; i<output_size; i++){
        output[i]++;
    }

    if (input[0]==7){
        output[output_size]=0;
        output_size++;
    }
    return output_size;
}

int main(){
    int arr[5]={1,7,3,4,7};
    int output[100];
    int ans=all_indices_7_1(arr,5,output);
    cout<<"the output array size is : " <<ans<<endl;

    cout<<endl<<"all indices of 7 are : "<<endl;

    for(int i=0; i<ans; i++){
        cout<<output[i]<<" ";
    }
    return 0;
}
