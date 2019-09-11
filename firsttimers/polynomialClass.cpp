#include<iostream>
#include<cmath>
using namespace std;

class Polynomial{
    int sze;
    int* arr;

public:
    Polynomial(int s):sze(s){
        arr=new int[s];
        for(int i=0; i<s; i++){
            arr[i]=0;
        }
    }

    void setCoeff(int const &p, int const& c){
        if (p < sze){
            arr[p]=c;
        }
        else{
            int* newarr=new int[p+1];
            for(int i=0; i<sze; i++){
                newarr[i]=arr[i];
            }
            for(int i=sze; i<p; i++){
                newarr[i]=0;
            }
                newarr[p]=c;
                delete [] arr;
                arr=newarr;
                delete newarr;
                sze=p+1;
        }
}

    int evaluate(int const& x){
        int output=0;
        for(int i=0; i<sze; i++){
            output=output+arr[i]*pow(x,i);
        }
        return output;
    }

    int getCoeff(int const &p){
        if (p >= sze){
            cout<<" array element for power " <<p<<" doesn't exist";
            return -1;
        }
        else{
            return arr[p];
        }
    }

};

int main(){
    Polynomial p(3);
    p.setCoeff(2,3);
    p.setCoeff(0,1);
    cout<< p.evaluate(2)<<endl;
    cout<<p.getCoeff(3)<<endl;
    p.setCoeff(3,1);
    cout<< p.evaluate(2)<<endl;


   return 0;
}
