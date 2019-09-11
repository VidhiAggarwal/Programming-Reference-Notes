#include<iostream>
#include<math.h>
using namespace std;



void print(char arr[]){
     cout<<arr<<endl;
}

void all_codes(int n, int p, char(&helper)[27], int pos, char* printarr)
{
    if(n==0){
        printarr[pos]=0;
        print(printarr);
        cout<<"hi"<<endl;
        return;
    }

    int divisor=pow(10,p);
    cout<<divisor<<endl;
    int quotient=n%divisor;
    printarr[pos]=helper[n/divisor];
    all_codes(quotient, p-1, helper, pos+1,printarr);

    cout<<pos<<endl;    // divisor,pos and p should be same as line 20 but change ho gaya after call why ..
    divisor=divisor/10;
    quotient=n%divisor;
    printarr[pos]=helper[n/(divisor)];
    all_codes(quotient, p-2, helper, pos+1,printarr);
    return;
}




int main()
{
    char helper[27];
    for(int i=1; i<=26; i++){
        helper[i]=i+64;
    }
    char printarr[4]={0};

    all_codes(23, 1, helper, 0, printarr);
    return 0;
}

