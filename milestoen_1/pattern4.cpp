#include<iostream>
using namespace std;

// pritn pattern 
//    1
//    23
//   345
//  4567
// 56789

int main(){

       int n=5;
	//    cin>>n;

	   int i=1;
	   while(i<=n){
		   int space=1;
		   while(space<=n-i){
			   cout<<" ";
			   space++;
		   }

			int j=1;
			int value =i;
		   while(j<=i){
			   cout<<value;
			   j++;
			   value++;
		   }
		   cout<<endl;
		   i++;
	   }
  
}


