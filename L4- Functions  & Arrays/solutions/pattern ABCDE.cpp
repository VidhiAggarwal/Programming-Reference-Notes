#include<iostream>
using namespace std;

void pattern_ABCDE(int n){            // without using cols loop

    for(int r=n; r>0; r--){
        char val='A';
        int c=0;
            while(val>=r && c<r){
               cout<<val;
               val++;
               c++;
        }
        val=val-1;
            while(val>0&& c<2*r){
               cout<<val;
               val--;
               c++;
        }
    cout<<endl;
}
}

void pattern_ABCDE_1(int n){    // using columns loop and if condition

    for(int r=n; r>0; r--){
        char val='A';
        for (int c=0; c<2*r; c++){
            if (c<r){
                cout<<val;
                val++;
            }

         else{
                val--;
                cout<<val;
            }
        }
        cout<<endl;
    }
}

int main(){
pattern_ABCDE_1(5);
}

