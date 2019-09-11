#include<iostream>
using namespace std;
int main(){

    //datatype int h to output to int hi hoga
  int PreOrder[7]={1,2,4,5,3,6,7};
  int InOrder[7]={4,2,5,1,6,3,7};
    int leftPreOrder[10];
    int rightPreOrder[10];
    int leftInOrder[10];
    int rightInOrder[10];
    int i=0;
    for(i=0; InOrder[i]!=PreOrder[0]; i++){
        leftPreOrder[i]=PreOrder[i+1];
        leftInOrder[i]=InOrder[i];
    }
    cout<<"left preorder" <<endl;
        for(int k=0; k!=i; k++){
            cout<<leftPreOrder[k];
        }
    cout<<endl<<"left inorder" <<endl;
        for(int k=0; k!=i; k++){
            cout<<leftInOrder[k];
        }
    i=i+1;
    int j=0;
    for(; InOrder[i]!=PreOrder[i]; i++, j++){
        rightPreOrder[j]=PreOrder[i];
        rightInOrder[j]=InOrder[i];
    }

        rightPreOrder[j]=PreOrder[i];
        rightInOrder[j]=InOrder[i];

    cout<<endl<<"right preorder" <<endl;
        for(int k=0; k<=j; k++){
            cout<<rightPreOrder[k];
        }
    cout<<endl<<"right inorder" <<endl;
        for(int k=0; k<=j; k++){
            cout<<rightPreOrder[k];
        }

return 0;

    int arr[1000];
    arr['a']=10;
    cout<<arr[97]<<endl;

    cout<<5/2<<endl;
    float y=5/2;
    cout<<y<<endl;
    int i1='a';
    cout<<i1<<endl;

    int i2='a';   // ascii values added
    cout<<i2<<endl;

    int i3='a'-10;
    cout<<i3<<endl;

   // datatype char h to output to char hi hoga !!
    char c1='a';    // character
    cout<<c1<<endl;

    char c2=65;     // integer to ascii value  .. use case ??
    cout<<c2<<endl;

    char c3=1+2;       // similar
    cout<<c3<<endl;

    char c4 =1+'b';   // ascii equivalent of b+1
    cout<<c4<<endl;

    char d='x'+'y';
    cout<<d<<endl;

    char a='9'+'9';   // character 9 (digits in quotes are characters.. 255 total characters)  adds thier asci equivalents
    cout<<a<<endl;    // use case


    // bool returns 1 or 0 .. anything other that 0 is false
    bool e= 'a';     // converts characters into its ascii equivalent
    cout<<e<<endl;

    bool b2=-1;
    cout<<b2<<endl;

    bool b3='\0';  // ascii equivalent is 0
    cout<<b3<<endl;




}
