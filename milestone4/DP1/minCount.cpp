#include<bits/stdc++.h>
using namespace std;

int minCountMemo(int n , int *ans){
	if(n==0) return 0;

	if(ans[n] != -1) return ans[n];

	int tempAns=n;
	for(int i=1; i*i<=n; i++){
		int temp=i*i;
		tempAns=min(tempAns, 1 + minCountMemo(n-temp, ans));
	}
	ans[n]=tempAns;
	return ans[n];
}

int minCount2(int n){
    int *ans=new int[n+1];

	memset(ans, -1, (n+1)*sizeof(int));
	return minCountMemo(n, ans);
}

int minCount(int n)
{
	//base case
	//for zero square possible min count 0  
	if(n == 0){	
		return 0;
	}

	//maximum count for n is n (1^2 + 1^2 + ...)
	int ans=n;
	for(int i=1; i*i<=n; i++){
		ans=min(ans, 1+minCount(n - (i*i)));
	}

	return ans;

}

int main(){
    cout<< "Min Count of squares needed to make a number: "<<endl ;
    int n;
    cin>>n;
    cout<<"brute force recursion approach: "<<minCount(n)<<endl;
    cout<<"memoization approach: "<<minCount2(n)<<endl;
}