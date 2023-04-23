#include<iostream>
using namespace std;

void sort012(int *arr, int n)
{
    int nexZ=0, nexT=n-1, i=0;

    while(nexT>=i){                         // if nexT cross the i then break the loop
                                                    // otherwise ith element again swap 2's with 1's ...
        if (arr[i]==0){                         // if ith elemrnt is 0 then  
            int temp=arr[nexZ];             // swap with nextZ th element and increse both i & nexZ
            arr[nexZ]=arr[i];
            arr[i]=temp;
            i++;
            nexZ++;
        }
        else if (arr[i]==2){                //   if ith elemrnt is 2 then 
            int temp = arr[nexT];       // swap with nexT th element and decrease only NexT 
            arr[nexT]=arr[i];
            arr[i]=temp;
            nexT--;
        }
        else{                               // if ith element is equal to 1 then just move ahead
            i++;
        }

    }
}

int main(){
    int arr[8]={2,1,0,0,2,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort012(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}