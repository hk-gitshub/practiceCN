#include<iostream>
using namespace std;

int sum(int input[], int n) {

  int smallop=0;
  if(n==0 || n==1){
    return input[0];
  } 
    smallop = sum(input + 1, n - 1);
    smallop += input[0];
  return smallop;
}

int main(){
    int arr[]={4, 5, 2, 1, 6, 8};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"sum of array is: "<<sum(arr, size)<<endl;
}