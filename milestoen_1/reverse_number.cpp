#include<iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;

	int reminder;	
    int reverse=0;
	if (n==0){
		cout<<0;
	}
	else{
		// while(true){
        //   if (n % 10 == 0) {
        //     n /= 10;
        // } else
        //     break;
        // }
        
           while (n > 0) {
            reminder = n % 10;
            n = n / 10;
            reverse=reverse*10 + reminder;
            }
        cout<<reverse;
     }    
}
