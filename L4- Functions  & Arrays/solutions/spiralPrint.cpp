#include<iostream>
using namespace std;

void spiralPrint(int input[][10], int imin, int jmin, int imax, int jmax){
    int i=0, j=0;
    while(imin<=imax && jmin<=jmax){
    for(j=jmin; j<=jmax; j++){
        cout<<input[i][j];
    }
    imin=imin+1;
    j-=1;
    cout<<" ";

    for(i=imin; i<=imax; i++){
        cout<<input[i][j];
    }
    jmax=jmax-1;
    i-=1;
    cout<<" ";
    if(imin<imax){
    for(j=jmax; j>=jmin; j--){
        cout<<input[i][j];
    }
    imax=imax-1;
    j+=1;
    cout<<" ";
    }
    if(jmin<jmax){
    for(i=imax; i>=imin; i--){
        cout<<input[i][j];
    }
    jmin=jmin+1;
    i+=1;
    cout<<" ";
    }
    }
}

int main(){
int rows, cols, arr[10][10];
cout<<"Enter the number of rows : ";
cin>>rows;
cout<<"Enter the number of columns : ";
cin>>cols;
cout<<"Enter the array..row-wise.. with enter between consecutive elements";
for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>arr[i][j];
    }
    cout<<endl;
}
cout<<endl<<"The entered input is :"<<endl;
for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl<<"spiral print :"<<endl;
spiralPrint(arr,0,0,rows-1,cols-1);
}
