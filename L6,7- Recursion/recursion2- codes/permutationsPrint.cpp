#include<iostream>
using namespace std;


void print(char a[], int sze){
    for(int i=0; i<sze; i++){
        cout<<a[i];
    }
    cout<<endl;
}

void permutations(char a[], int currpos, int sze){
    if (currpos==sze){
        print(a,sze);
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
    return 0;
}
