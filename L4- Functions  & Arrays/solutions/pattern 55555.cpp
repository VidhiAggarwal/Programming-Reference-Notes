#include<iostream>
using namespace std;

void pattern_55555(int n){            // without using cols loop

    for(int r=n; r>0; r--){
        int val=n;
        int c=0;
            while(val>=r && c<n){
               cout<<val;
               val--;
               c++;
        }
            while(val>0&& c<n){
               cout<<val;
               c++;
        }
    cout<<endl;
}
}

void pattern_55555_1(int n){    // using columns loop and if condition

    for(int r=n; r>0; r--){
        int val=n;
        for (int c=0; c<n; c++){
            if (val>=r){
                cout<<val;
                val--;
            }
            else{
                cout<<val;
            }
        }
        cout<<endl;
    }
}

int main(){
pattern_55555(5);
}
