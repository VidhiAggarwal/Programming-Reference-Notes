#include<iostream>
using namespace std;

int fact(int n){
  if (n==0){
    return 1;
  }
  return n*fact(n-1);
}

int permutations(char input[], char output[][10]){
    if (input[0]==0){
        return 0;
    }
    if (input[1]==0){      // 1 char left
       output[0][0]=input[0];
       output[0][1]=0;
       return 1;
    }
    int smaller_string_size=permutations(input+1,output);
    int curr_char=input[0];
    int rowcount=fact(smaller_string_size);

    for(int numsets=0; numsets<smaller_string_size; numsets++){               // copying by sets
        for(int row=0; row<rowcount; row++){
                int col=0;
            for ( ; output[row][col]!=0; col++){
                output[row+((numsets+1)*rowcount)][col]=output[row][col];
            }
            output[row+((numsets+1)*rowcount)][col]=0;
       }
    }

    for(int numsets=0; numsets<=smaller_string_size; numsets++){             // inserting the current character at all places
        for(int row=0; row<rowcount; row++){
            for (int col=smaller_string_size; col>=numsets; col--){
                output[row+(numsets*rowcount)][col+1]=output[row+(numsets*rowcount)][col];
            }
            output[row+(numsets*rowcount)][numsets]=curr_char;
        }
    }
    return smaller_string_size+1;
}


int main(){
    char input[]="abc";
    char output[10][10]={};
    int ans=permutations(input,output);
    int numrows=fact(ans);
    for(int i=0; i<numrows; i++){
        cout<<output[i];
        cout<<endl;
     }
}
