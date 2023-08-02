#include<bits/stdc++.h>
using namespace std;

int minCostPathHelper(int **input, int i, int j, int m, int n){
	if(i == m-1 && j == n-1){
		return input[i][j];
	}

	if(i >= m || j >= n){
		return INT_MAX;
	}
	int a=INT_MAX;
	// if(i+1<m){
		//down
		a=minCostPathHelper(input, i+1,  j, m, n);
	// }
	int b=INT_MAX;
	// if(j+1<n){
		//to the right
		b=minCostPathHelper(input, i, j+1, m, n);
	// }
	int c=INT_MAX;
	// if(i+1<m && j+1<n){
		//to the diagonal 
		c = minCostPathHelper(input, i+1, j+1, m, n);
	// }
	return min(a, min(b, c)) + input[i][j];
	
}

int minCostPath(int **input, int m, int n)
{
	return minCostPathHelper(input, 0, 0, m, n);
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
	cout << minCostPath(arr, n, m) << endl;
}