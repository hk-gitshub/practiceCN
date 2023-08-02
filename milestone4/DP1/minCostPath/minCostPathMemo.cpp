#include<bits/stdc++.h>
using namespace std;

int minCostPathHelper(int **input, int i, int j, int m, int n, int **output){
	if(i == m-1 && j == n-1){
		return input[i][j];
	}

	if(i >= m || j >= n){
		return INT_MAX;
	}

    //check if exist
    if(output[i][j] != -1){
        return output[i][j];
    }
	
	int	a=minCostPathHelper(input, i+1,  j, m, n, output);
	int b=minCostPathHelper(input, i, j+1, m, n, output);
	int c=minCostPathHelper(input, i+1, j+1, m, n, output);

	int ans = min(a, min(b, c)) + input[i][j];
    output[i][j]=ans;

    return output[i][j];
	
}

int minCostPath(int **input, int m, int n)
{   
    // int output[m][n];
    int **output = new int*[m];
	for(int i=0; i<m; i++){
		output[i] = new int[n];
		for(int j=0; j<n; j++){
			output[i][j]=-1;
		}
	}
    // memset(output, -1, m*n*sizeof(int));
	return minCostPathHelper(input, 0, 0, m, n, output);

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
	cout << minCostPath(arr, n, m) << endl;
}