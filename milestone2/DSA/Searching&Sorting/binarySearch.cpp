#include<iostream>
using namespace std;

int binarySearch(int *input, int n, int val)
{
    int start=0, end=n-1;

    while(start<=end){
        int mid=(start+end)/2;

        if (val==input[mid]){
            return mid;
        }
        else if (val>input[mid]){
            start=mid+1;
        }
        else if(val<input[mid]){
            end = mid-1;
        }
    }

    return -1;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int x=4, n=sizeof(arr)/sizeof(arr[0]);

    cout<<binarySearch(arr, n, x);
}