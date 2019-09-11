//Reversing all the words in a string
#include<iostream>
using namespace std;

void Reverse(char str[], int si, int ei){    // reverse function reverses the string between start index and end index
    while (si<=ei){
        swap (str[si], str[ei]);
        si=si+1;
        ei=ei-1;
    }
}

int main(){

    char input[100]={"My Life My Rules"};
	int startindex=0 , endindex=0;         //startindex and endindex are initially 0
	while(input[startindex-1] != '\0'){    // loop to traverse the whole string
	for( ; input[endindex] != ' '&& input[endindex]!='\0' ;endindex++){ //loop to traverse the string till space
	}
	endindex=endindex-1;    // endindex points at space or null character so decrement by 1
	Reverse(input,startindex,endindex);
	endindex=endindex+2;   // pointing endindex and startindex to the character after space
    startindex=endindex;
	}

    int i=0;
	for( ; input[i] != '\0'; i++){    // printing the reversed string
    cout << input[i];
}
}

