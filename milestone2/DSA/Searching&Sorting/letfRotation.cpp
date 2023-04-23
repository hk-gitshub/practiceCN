#include<iostream>
using namespace std;

void rotate(int *input, int d, int n)
{   
    int p=0;
    int arr[d];
    while(p<d){         //copy rotted 0-d elemet in another

        // int i=0;
        // int key=input[0];
        // while(i<n-1){
        //     input[i]=input[i+1];
        //     i++;
        // }
        // input[n-1]=key;
        arr[p]=input[p];
        // cout<<"arr:"<<arr[p]<<endl;
        p++;
    }

    for(int j=0; j<n; j++){     //shift left side d-n 
        input[j]=input[j+d];
        // cout<<"input:"<<input[j]<<endl;
    }

    int k=0;
    for(int j=n-d ;j<n ;j++){    // past temp array to original array n-d to n 
        input[j]=arr[k];
        // cout<<"in:"<<input[j]<<endl;
        k++;
    }
}

int main(){

    int arr[6]={2,4,6,7,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d=3;

    cout<<"actual array:"<<endl;
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"rotated array:"<<endl;
    rotate(arr, d, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}