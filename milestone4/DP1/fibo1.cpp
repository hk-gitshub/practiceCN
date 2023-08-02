#include<bits/stdc++.h>
using namespace std;

//This technique called Dynamic programming
// Generally DP is in iterator form
int fibo3(int n){
    int *ans=new int[n+1];
    ans[0]= 0;
    ans[1]= 1;
    for(int i=2; i<=n; i++){
        ans[i]=ans[i-1]+ans[i-2];
    }

    return ans[n];
}

//TC: O(2^n)
// this called bruteforce technique
int fibo(int n){
    if(n<=1) return n;

    int a= fibo(n-1);
    int b= fibo(n-2);
    return a+b;
}

//TC = O(n)
// This called memoization technique
// Generally memoization is in recursion form
int fiboHelper(int n, int *arr){
    if(n<=1) return n;

    //check if already exist
    if(arr[n] != -1){
        return arr[n];
    }

    int a=fiboHelper(n-1, arr);
    int b=fiboHelper(n-2, arr);

    //save for future use
    arr[n]=a+b;
    return arr[n];
}

int fibo2(int n){
    int *arr=new int[n+1];
    for(int i=0; i<=n; i++){
        arr[i]=-1;
    }

    return fiboHelper(n, arr);
}

int main(){
    int n;
    cin>>n;
    cout<<"nth fibonaci1 number is: \n"<<fibo(n)<<endl;
    cout<<"nth fibonaci2 number is: \n"<<fibo2(n)<<endl;
    cout<<"nth fibonaci3 number is: \n"<<fibo3(n)<<endl;


}