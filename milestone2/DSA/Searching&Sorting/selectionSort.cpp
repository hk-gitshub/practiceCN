#include<iostream>
#include<climits>
using namespace std;

// selection sort is select min element from array and place it to 1st (ith) position.
// selection sort sort the array from 1st position after 1st iteration.

void selectionSort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        int min=INT_MAX, index;
        for(int j=i; j<n; j++){     // Finding Min element and min index.

            if (min>arr[j]){
                min=arr[j];
                index=j;
            }
        }

        // swap the element from min to ith element.
        int temp;
        temp=arr[index];
        arr[index]=arr[i];
        arr[i]=temp;   
    }
}

int main(){
    int arr[7]={5,2,6,8,10,9,1};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}