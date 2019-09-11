#include<iostream>
using namespace std;

int subsequences(char input[], char output[][10]){
    if (input[0]=='\0'){
        output[0][0]='\0';
        return 1;
    }
    int curr_char=input[0];
    int output_size=subsequences(input+1,output);
    for(int row=0; row<output_size; row++){
        output[row+output_size][0]=curr_char;
        int col=0;
        for( ; output[row][col]!='\0'; col++){
            output[row+output_size][col+1]=output[row][col];
        }
    output[row+output_size][col+1]='\0';
    }
    return 2*output_size;
}

int main(){
char output[10][10]={0};
char input[10]="abcde";
int ans=subsequences(input, output);
cout<<ans<<endl;
for(int i=0; i<ans; i++){
        cout<<output[i];
        cout<<endl;
}
return 0;
}
