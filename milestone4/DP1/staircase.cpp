#include<bits/stdc++.h>
using namespace std;
//using DP
int staircase3(int n){
    int *ans=new int[n+1];

    ans[0]=1;
    ans[1]=1;
    ans[2]=2;
    for(int i=3; i<n+1; i++){
        ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
    }
    return ans[n];
}


// using memoization technique
int staircase2Helper(int n, int *ans){
    if(n==0) return 1;

    if(ans[n] != -1){
        return ans[n];
    }

    int a=staircase2Helper(n-1, ans);
    int b=0, c=0;
    if(n-2 >= 0){
        b=staircase2Helper(n-2, ans);
    }
    if(n-3 >= 0){
        c = staircase2Helper(n-3, ans);
    }
    ans[n]=a+b+c;
    return ans[n];
    
}

int staircase2(int n){
    int *ans=new int[n+1];
    return staircase2Helper(n, ans);
    for(int i=0; i<n+1; i++){
        ans[i]=-1;
    }
}


//using bruteforefe recursion technoque
int staircase(int n){
    if (n == 0) return 1;

    int a = staircase(n-1);
    int b=0;
    if(n-2 >= 0){
    b = staircase(n-2);
    }
    int c=0;
    if( n-3 >= 0){
    c = staircase(n-3);
    }

    return a+b+c;
}

int main()
{
    int T, n;
    cin>>T;
    while(T != 0){
        cin>>n;
        cout<<staircase3(n)<<endl;
        T--;
    }

    return 0;
}