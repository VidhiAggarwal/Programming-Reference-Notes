#include<iostream>
#include<cmath>
using namespace std;

char keypad[20][4]={"0","0", "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vwx" ,"yz"};


int keypadprint(int n, char output[][4]){
    if (n>=0 && n<=9){
        output[0][0]=keypad[n][0];
        output[1][0]=keypad[n][1];
        output[2][0]=keypad[n][2];
        return 1;
    }
    int smallercols=keypadprint(n/10,output);

    int smallerRows=pow(3,smallercols);
    for(int row=0; row<smallerRows; row++){
        for(int col=0; col<smallercols; col++){
            output[row+smallerRows][col]=output[row][col];
        }
    }
    for(int row=0; row<smallerRows; row++){
        for(int col=0; col<smallercols; col++){
            output[row+2*smallerRows][col]=output[row][col];
        }
    }
    char currelem=keypad[n%10][0];
    for(int row=0; row<smallerRows; row++){
            output[row][smallercols]=currelem;
        }
    currelem=keypad[n%10][1];
    for(int row=0; row<smallerRows; row++){
            output[row+smallerRows][smallercols]=currelem;
    }
    currelem=keypad[n%10][2];
    for(int row=0; row<smallerRows; row++){
            output[row+2*smallerRows][smallercols]=currelem;
    }
    return smallercols+1;
}

int main(){
    char output[1000][4]={0};
    int ans=keypadprint(465,output);
    for(int i=0; i<pow(3,ans); i++){
        for(int j=0; j<ans; j++){
            cout<<output[i][j];
        }
        cout<<endl;
    }
    return 0;
}

