#include<iostream>
using namespace std;

int factorial(int n){

    if (n == 2){
        return 2;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){

    int n=10;
    int output=factorial(n);

    cout<<"factorial of "<<n<<" is :"<<output<<endl;
}