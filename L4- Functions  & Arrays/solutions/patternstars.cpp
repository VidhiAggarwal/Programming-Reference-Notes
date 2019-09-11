#include<iostream>
using namespace std;

void pattern_stars(int n){       // without using columns loop "BETTER"
    int h=(n/2)+1;
    for(int r=0; r<h; r++){
            for(int spaces=0; spaces<r; spaces++){
                cout<<" ";
            }
            for(int stars=0; stars<=r; stars++){
                cout<<"*";
            }
        cout<<endl;
    }
    h=n/2;
    for(int r=h; r>0; r--){
        for(int spaces=0; spaces<r-1; spaces++){
            cout<<" ";
        }
        for(int stars=0; stars<r; stars++){
            cout<<"*";
        }
    cout<<endl;
}
}

void pattern_stars1(int n){        // using columns loop and if condition
    int h=(n/2)+1;
    for(int r=0; r<h; r++){
            for(int c=0; c<(2*r)+1; c++){
                if (c<r){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
        cout<<endl;
    }
    h=(n/2)-1;
    for(int r=h; r>=0; r--){
            for(int c=0; c<(2*r)+1; c++){
                if (c<r){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
        cout<<endl;
    }
}



int main(){
pattern_stars(7);
cout<<endl;
cout<<endl;
pattern_stars1(7);
}

