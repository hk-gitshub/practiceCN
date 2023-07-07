#include<iostream>
using namespace std;

// Change in the given string itself. So no need to return or print anything
int length(char input[]){
	if(input[0] == '\0'){
		return 0;
	}
	int len= 1+length(input+1);
	return len;
}

void shiftChar(char input[], int size){

	if(size == 0) return;
	input[size+2] = input[size];
	shiftChar(input, size-1);
}

void shiftChar2(char input[], int size){		// just for practice purpose

	if(input[0] == '\0') return;
	shiftChar2(input+1, size-1);
	input[size+2] = input[size];
}

void replacePi(char input[]) {
	
	if(input[0] == '\0') return;

	if(input[0] == 'p' && input[1]=='i'){
		int size=length(input);
		shiftChar(input, size);
		// for(int i=size+2; i>=0; i--){
		// 	input[i]=input[i-2];
		// }
		input[0]='3';
		input[1]='.';
		input[2]='1';
		input[3]='4';
	}

	replacePi(input+1);

}


int main(){

    char arr[]="xpix";
    char *p = &arr[0];
    replacePi(arr);
    replacePi(p);
    cout<<"replace pi: "<<arr<<endl;
    cout<<"replace pi: "<<p<<endl;
}