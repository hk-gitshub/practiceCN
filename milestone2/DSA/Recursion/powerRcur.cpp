#include<iostream>
using namespace std;

int power(int x, int n){

    if (n == 0){
        return 1;
    }
    else{
        return x*power(x, n-1);
    }
}

int main(){
    int n=10, x=3;
    cout<<power(n,x)<<endl;
}
