#include<bits/stdc++.h>
using namespace std;


int countZeros(int n) {
    // Write your code here
    if(n==0) return 1;
    if(n/10==0) return 0;

    int ans=countZeros(n/10);

    if(n%10 == 0) return ++ans;
    else return ans;   
}


int countZeros2(int n) {
    int ans=0;
    if(n==0) return 1;
    if(n/10==0) return 0;

    if(n%10==0){
    ans=1+countZeros2(n/10);
    }else {
    ans=countZeros2(n/10);
    }
    return ans;
}



int main(){
    int n=200200;
    cout<<"zeros: "<<countZeros(n);
}


