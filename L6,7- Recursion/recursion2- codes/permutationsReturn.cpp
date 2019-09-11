#include<iostream>
using namespace std;

char output[100][20]={0};


void print(char a[], int sze){
    for(int i=0; i<sze; i++){
        cout<<a[i];
    }
    cout<<endl;
}
int row=0;
void addPerm(char a[], int sze){
    for(int col=0; col<sze; col++){
        output[row][col]=a[col];
    }
    output[row][sze]=0;
    row=row+1;
}

void permutations(char a[], int currpos, int sze){
    if (currpos==sze){
        addPerm(a,sze);
    }
    for(int i=currpos; i<sze; i++){
    swap(a[i],a[currpos]);
    permutations(a,currpos+1,sze);
    swap(a[i],a[currpos]);
    }
}

int main(){
    char a[]={"1234"};
    permutations(a,0,4);
    for(int i=0; i<row; i++){
        for(int j=0; j<4;j++){
            cout<<output[i][j];
        }
        cout<<endl;
    }
}

