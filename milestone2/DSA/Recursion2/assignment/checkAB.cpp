#include<iostream>
using namespace std;

bool checkAB(char input[]) {
	if(input[0]=='\0') return true;

	if(input[0]=='a'){
		if(input[1]=='b' && input[2]=='b'){
			return checkAB(input+3);
		}
		else {
			return checkAB(input+1);
		}
	}	
	else{
		return false;
	}
}

int main(){
    char str[]="aaabbaba";
    cout<<"following string "<<str<<" is:"<<checkAB(str)<<endl;

}

