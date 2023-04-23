#include<iostream>
using namespace std;

void pushZeroesEnd(int *arr, int size)
{
    int i=0, j=0;
    while(i<size){
      if (arr[i] != 0){
        int temp = arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        j++;
      }
      i++;
    }
}

int main(){

    int arr[8]={0,0,2,1,7,3,7,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    pushZeroesEnd(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}