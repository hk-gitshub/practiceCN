#include <bits/stdc++.h>
using namespace std;

int board[11][11];
bool isPossible(int n, int raw, int col){

    for (int i = raw - 1; i >= 0; i--)
        if (board[i][col] == 1)
            return false;
    for (int i = raw - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 1)
            return false;
    for (int i = raw - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        if (board[i][j] == 1)
            return false;
    
    return true;

}

void nQueensHelper(vector<vector<int>> &ans, int n, int raw){
    if (raw == n)
    {
        vector<int> temp;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                temp.push_back(board[i][j]);
            }
        }
        ans.push_back(temp);
    }
    else
    {
        for (int j = 0; j < n; j++)
        {
            if (isPossible(n, raw, j))
            {
                board[raw][j] = 1;
                nQueensHelper(ans, n, raw + 1);
                board[raw][j] = 0;
            }
        }
    }
}

vector<vector<int>> nQueens(int n){   
    vector<vector<int>> ans;
    memset(board, 0, 11*11*sizeof(int));
    nQueensHelper(ans, n, 0);
    return ans;
}

int main(){
    cout<<"\nnQueen problem\n";
    int n;
    cin >> n ;
    auto ans = nQueens(n);

    for(auto v:ans)
    {
        for(auto i:v)cout << i << " ";
        cout << endl;
    }
}