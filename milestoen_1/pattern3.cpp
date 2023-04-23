#include<iostream>
using namespace std;

// print pattern 
// 1
// 23
// 345
// 4567


int main(){

    int n=5;
	 cout <<"Enter the number";
	// cin>>n;

	int i=1;
	while(i<=n){
		int j=1;
		int value=i;
		while(j<=i){
			cout<<value;
			value++;
			j++;
		}
		cout<<endl;
		i++;
	}	
  
}


