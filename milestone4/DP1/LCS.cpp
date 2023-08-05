#include<bits/stdc++.h>
using namespace std;

//LCS DP code
int LCS_DP(string s, string t){
    int m=s.size();
    int n=t.size();
    int **output=new int*[m+1];
    for(int i=0; i<=m; i++){
        output[i] = new int[n+1];
    }

    //fill 1st row
    for(int j=0; j<=n; j++){
        output[0][j]=0;
    }

    // fill 1st col
    for(int i=0; i<=m; i++){
        output[i][0]=0;
    }

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if (s[m-i]==t[n-j]){
                output[i][j]= 1+output[i-1][j-1];
            }
            else{
                int a=output[i-1][j];
                int b=output[i][j-1];
                int c=output[i-1][j-1];

                int ans=max(a, max(b,c));
                output[i][j]=ans;
            }
        }
    }
    return output[m][n];

}

// LCS memoaization code
int LCSMemoHelper(string s, string t, int **output){
    /* base cases */
    int m=s.size();
    int n=t.size();
    if(s.size() == 0 || t.size()==0 ){
        return 0;
    }

    if(output[m][n] != -1){
        return output[m][n];
    }

    if(s[0]==t[0]){
        return 1+LCSMemoHelper(s.substr(1), t.substr(1), output);
    }

    int a=LCSMemoHelper(s.substr(1), t, output);
    int b=LCSMemoHelper(s, t.substr(1), output);
    int c=LCSMemoHelper(s.substr(1), t.substr(1), output);

    int ans=max(a, max(b,c));

    output[m][n]=ans;
    return ans;
}

int LCSmemo(string s, string t){
    int m=s.size();
    int n=t.size();
    int **output=new int* [m+1];
    for(int i=0; i<=m; i++){
        output[i]=new int[n+1];
        for(int j=0; j<=n; j++){
            output[i][j]=-1;
        }
    }

    return LCSMemoHelper(s, t, output);
}

int LCS(string s, string t){

    //base case
    //if any string size is 0 LCS will be 0
    if(s.size() == 0 || t.size() == 0) return 0;

    //recursive call
    if(s[0] == t[0]) return 1 + LCS(s.substr(1), t.substr(1));

    int a=LCS(s.substr(1), t);
    int b=LCS(s, t.substr(1));
    //ingnore below step 
    //becuase below step is redundent covered in above steps
    int c=LCS(s.substr(1), t.substr(1));

    return max(a, max(b,c));

}

int main(){
    string s, t;
    cin>>s>>t;
    cout<<LCS(s, t)<<endl;
    cout<<"Using Memoization"<<endl;
    cout<<LCSmemo(s,t)<<endl;
    cout<<"using DP"<<endl;
    cout<<LCS_DP(s,t)<<endl;
}