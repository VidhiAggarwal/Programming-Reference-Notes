#include<iostream>
using namespace std;

void printHanoi(int n, char src, char dest, char helper){
    if (n==1){
        cout<<"Move disk 1 from "<<src<<" to "<<dest<<endl;;
        return;
    }
    printHanoi(n-1, src, helper, dest);   // move n-1 disks from source to helper using destination
    cout<<"Move disk"<<n<<" from "<<src<<" to "<<dest<<endl;  // move the largest disk from source to destination
    printHanoi(n-1, helper, dest, src);  // move the remaining disks from helper to destination using source
}

int main(){
char src='S';
char dest='D';
char helper='H';
printHanoi(3,src,dest,helper);
return 0;
}
