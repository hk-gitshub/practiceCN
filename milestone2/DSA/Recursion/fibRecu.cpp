#include<iostream>
using namespace std;

int fib(int n){

    if(n==0){
        return n;
    }else if (n == 1){
        return n;
    }
    else{
        int smallop1=fib(n-1);
        int smallop2=fib(n-2);
        return smallop1+smallop2;
    }
    
    
}

int main(){
    int n=5;
    cout<<fib(n);
}
