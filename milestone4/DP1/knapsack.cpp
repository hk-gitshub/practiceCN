#include <bits/stdc++.h>
using namespace std;

//using memoization approach
int knapsackHelper(int *weight, int *value, int n, int maxWeight, int **kp){
	//base case
	if(n==0 || maxWeight==0){
		return 0;
	}

	//check if exist or not
	if(kp[n][maxWeight] != -1){
		return kp[n][maxWeight];
	}
	
	//recursive calls
	int ans;
	int value1=INT_MIN;
	if(maxWeight-weight[n-1] >=0){
		value1=knapsackHelper(weight, value, n-1, maxWeight-weight[n-1], kp) + value[n-1];
	}
	int value2=knapsackHelper(weight, value, n-1, maxWeight, kp);

	ans=max(value1, value2);
	kp[n][maxWeight]=ans;
	return ans;
}

int knapsackMemo(int* weight, int* value, int n, int maxWeight) {
	int **kp=new int*[n+1];
	for(int i=0; i<=n; i++){
		kp[i]=new int[maxWeight+1];
		for(int j=0; j<=maxWeight; j++){
			kp[i][j]=-1;
		}
	}

	return knapsackHelper(weight, value, n, maxWeight, kp);
}


int knapsack(int* weight, int* value, int n, int maxWeight) {
    if(n==0 || maxWeight==0){
		return 0;
	}

	
	//recursive calls
	int ans;
	int value1=INT_MIN;
	if(maxWeight-weight[n-1] >=0){
		value1=value[n-1] + knapsack(weight, value, n-1, maxWeight-weight[n-1]);
	}
	int value2=knapsack(weight, value, n-1, maxWeight);

	ans=max(value1, value2);
	return ans;
}

/*4
4 5 2 10 
1 6 2 9 
15*/
int main(){
    int n;
    cout<<"enter the num items: ";
    cin>>n;
    int *weight=new int[n];
    int *value=new int[n];
    cout<<"enter weight of the items:"<<endl;
    for(int i=0; i<n; i++){
        cin>>weight[i];
    }
    cout<<"enter values of the items according to weight:"<<endl;
    for (int i = 0; i < n ; ++i){
        cin >> value[i];
    }
    int maxWeight;
    cout<<"maxWeight: ";
    cin>>maxWeight;

    cout<<"max weight of knapsack is: "<<endl;
    cout<<"using recursion:"<<endl;
    cout<<knapsack(weight, value, n, maxWeight)<<endl;
    cout<<"using memoization"<<endl;
    cout<<knapsackMemo(weight, value, n, maxWeight)<<endl;
    
}