#include<iostream>
#include<cstring>
using namespace std;

char* strtok(char* str, char del){
   static char* input=NULL;
    if(str!=NULL){
        input = str;
    }
    if(input == NULL){
            cout<<"hey"<<endl;
        return NULL;
    }
    int i=0;
    char* output=new char[strlen(input)];
    for(i=0; input[i]!='\0' && input[i]!=del ; i++){
        output[i]=input[i];
    }
    output[i]='\0';
    if (input[i]=='\0'){
    input=NULL;
    }
    else{
        input=input+i+1;
    }
    cout<<"hi"<<endl;
    return output;
}

int main(){
    char a[]="abc def ghi";
    cout<<strtok(NULL,' ')<<endl;
    cout<<"hello"<<endl;  // jaa kyon nahi raha yahan par
    cout<<strtok(a,' ')<<endl;
    cout<<strtok(NULL,' ')<<endl;
    cout<<strtok(NULL,' ')<<endl;
    //cout<<strtok(NULL,' ')<<endl;
    cout<<strtok(a,' ')<<endl;
    return 0;
}
