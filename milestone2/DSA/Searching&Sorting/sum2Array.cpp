#include<iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{   
    int m=size1-1, n=size2-1;
    int sum=0, value=0;
    int carry=0;        // value as reminder that will be put in output array
    while(m>=0 || n>=0 ){

        if (m>=0 && n>=0){
            sum=input1[m]+input2[n]+carry;
        }
        else if (m>=0){
            sum=input1[m]+carry;
        }
        else {
            sum=input2[n]+carry;
        }
        carry = sum / 10;
        value = sum % 10;
        if(m>=n){
            output[m+1]=value;
        }
    else{
        output[n+1]=value;  
    }
        output[0]=carry;
       m--;
       n--;
    }
}

int main(){
    int arr1[5]={9, 9, 4, 2, 1}, arr2[3]={9, 7, 9}; 
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);

    int output[m+1];

    sumOfTwoArrays(arr1, m, arr2, n, output);

    for(int i=0; i<m+1; i++){
        cout<<output[i]<<" ";
    }
}