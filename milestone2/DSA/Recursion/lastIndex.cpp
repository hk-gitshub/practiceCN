// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

int lastIndex(int input[], int size, int x) {
    if(size == 0) return -1;

    int ans=lastIndex(input+1, size-1, x);

    if(input[0]==x &&  ans == -1){
        return  0;
    }

    if (ans == -1)  return -1;
    else return ++ans;
}

int lastIndex2(int input[], int size, int x) {
    if(size == 0) return -1;

    if(input[size-1]==x)return size-1;

    int ans=lastIndex(input, size-1, x);

    return ans;
}

int main(){
    int arr[]={3, 4, 5, 11, 2, 9, 12};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=11;

    cout<<"last index of array is: "<<lastIndex(arr, size, x)<<endl;
    cout<<"last index of array is: "<<lastIndex2(arr, size, x)<<endl;
}
