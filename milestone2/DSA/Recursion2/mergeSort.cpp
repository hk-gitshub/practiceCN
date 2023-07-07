#include<bits/stdc++.h>
using namespace std;

// void merge(int input[], int start, int mid, int size){ //code not work
// 	int *p=new int[size];
// 	for(int k=0; k<size; k++){
// 		if(input[start] <= input[mid]){
// 			*(p+k)=input[start];
// 			start++;
// 		}
// 		else if (input[start]>input[mid]){
// 			*(p+k)=input[mid];
// 			mid++;
// 		}
// 		else if (start==mid){
// 			*(p+k)=input[mid];
// 			mid++;
// 		}
// 		else if (mid==size){
// 			*(p+k)=input[start];
// 			start++;
// 		}
// 	}

// 	for(int i=0; i<size; i++){
// 		input[i]=*(p+i);
// 	}
// }
void merge(int input[], int mid, int size){
	int *p=new int[size];
	int i=0, j=mid;
	for(int k=0; k<size; k++){
	if(i < mid && j < size){
		if(input[i] < input[j]){
			*(p+k)=input[i];
			i++;
                } else{
                  *(p + k) = input[j];
                  j++;
                }
        }
		else if (i==mid){
			*(p+k)=input[j];
			j++;
		}
		else if (j==size){
			*(p+k)=input[i];
			i++;
		}
	}

	for(int i=0; i<size; i++){
		input[i]=*(p+i);
	}
}

void mergeSort(int input[], int size){
	
	if(size==0||size==1) return;

	int mid=size/2;
	mergeSort(input, mid);
	mergeSort(input+mid, size-mid);
	merge(input, mid, size);
}

int main(){
    int arr[]={2, 3, 6, 3, 10, 5, 2};
    int size=sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, size);
	cout<<"sorted array using merge sort:"<<endl;
	for (int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
}