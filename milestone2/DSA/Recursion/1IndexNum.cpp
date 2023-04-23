#include<iostream>
using namespace std;

int firstIndex(int input[], int size, int x) {
    if(size == 0){
    return -1;
    }
    if(input[0] == x){
    return 0;
    }
    int count = firstIndex(input+1, size-1, x);
    if(count == -1)  return -1;
    else   return ++count;
}

int main(){
    int arr[]={4, 5, 2, 6, 1, 6, 8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=6;
    cout<<"1st index of nuber is: "<<firstIndex(arr, size, x)<<endl;
}

