#include<iostream>
using namespace std;

// It is sort the array from last which means largest element is going at last
void bubbleSort(int *input, int size)
{   
    int n=size;
    for(int i=0; i<size-1; i++){

        for(int j=1; j<size-i; j++){       //or for (int j=1; j<size; j++) 

            if (input[j-1]>input[j]){
                int temp;
                temp= input[j-1];
                input[j-1]=input[j];
                input[j]=temp;
            }
        }
                                            // n--;
    }
}

int main(){
    int arr[7]={3,7,4,10,8,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}