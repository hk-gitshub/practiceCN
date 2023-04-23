#include<iostream>
using namespace std;

void insertionSort(int *arr, int size)
{
    for(int i=1; i<size; i++){

        int temp=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>temp){        
            arr[j+1]=arr[j];                    // shift the element previous to current
            j--;
        }
        arr[j+1]=temp;                           // shift element to appropriate position
    }
}

int main(){
    int arr[7]={20, 4, 1, 9, 5, 11, 2};
    int n=sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}