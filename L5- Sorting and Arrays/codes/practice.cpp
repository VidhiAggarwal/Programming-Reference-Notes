//Reversing all the words in a string
#include<iostream>
using namespace std;
int main(){

	char currentChar[50] , temp;
	cin.get(currentChar , 50);
	int i = 0 , count = 0;
	while(currentChar[i] != '\0'){

	for(i ; currentChar[i] != ' ' ;i++){
            count++;

	}
        for(i=i-count; i < i + count/2; i++) {
        temp = currentChar[i];
        currentChar[i] = currentChar[i + count-1];
        currentChar[i + count - 1] = temp;


     }
        i = i + count + 1;
        count = 0;


	}
	for(i ; currentChar[i] != '\0'; i++){
    cout << currentChar[i];
}
}
