#include<bits/stdc++.h>
using namespace std;\

//using DP approach bottom to top
//complexity is M*N both time and space
int minCostPathDP(int **input, int m, int n){
    int **output = new int *[m];
    for(int i=0; i<n; i++){
        output[i]=new int[n];
    }

    //fill the last cell
    output[m-1][n-1]=input[m-1][n-1];

    // fill the last raw right to left
    for(int i=n-2; i>=0; i--){
        output[m-1][i]=output[m-1][i+1] + input[m-1][i];
    }

    //fill the last column bottom to top
    for(int i=m-2; i>=0; i--){
        output[i][n-1]=output[i+1][n-1] + input[i][n-1];
    }

    //fill the remaining cells 
    for(int i=m-2; i>=0; i--){
        for(int j=n-2; j>=0; j--){
            output[i][j]=min(output[i][j+1], min(output[i+1][j+1], output[i+1][j])) + input[i][j];
        }
    }

    return output[0][0];
}

int main(){
    int **arr, n, m;
	cin >> n >> m;
	arr = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << minCostPathDP(arr, m, n) << endl;
}