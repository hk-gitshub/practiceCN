#include<iostream>
using namespace std;

int bSearch(int input[], int start, int end, int element){
    //  if(start<=end){
    //     int mid = (start+end)/2;
    //     if(input[mid]==element){
    //         return mid;   
    //     }
    //     if(input[mid]>element){
    //         return bSearch(input,start,mid-1,element);   
    //     }else{
    //         return bSearch(input,mid+1,end,element);
    //     }
    // } else {
    //   return -1;
    // }

    if(start<=end){
        int mid=(start+end)/2;
        if(element==input[mid]){
            return mid;
        }
        if (input[mid]>element){
            return bSearch(input, start, mid-1, element);
        } else {
            return bSearch(input, mid+1, end, element);
        }
    } else {
      return -1;
    }
}

int main(){
    int arr[]={1, 2, 3, 4, 5, 6, 7, 7, 8};
    int element=1;
    int size=sizeof(arr)/sizeof(arr[0]);
    int index=bSearch(arr, 0, size-1, element);

    cout<<"index of element "<<element<<" is :"<<index<<endl;

}