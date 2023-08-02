#include <iostream>
using namespace std;

	
int partition(int input[], int start, int end){

	int smallerCount=0;
	int x=input[start];
	for(int i=start+1; i<=end; i++){
		if(x>input[i]){
			smallerCount++;
		}
	}
	int tem=input[smallerCount];
	input[smallerCount]=x;
	input[start]=tem;
	
	  int i=start, j=end;
	while(i<j){
		if(input[i]<input[smallerCount]){
			i++;
		}
		else if (input[j]>input[smallerCount]){
			j--;
		}
		else {
			int temp=input[i];
			input[i]=input[j];
			input[j]=temp;
		}
	}	
	return smallerCount;
}


	void quickSort(int input[], int start, int end)
	{
    		if(start>=end) return;

			int pindex=partition(input, start, end);
			quickSort(input, start, pindex-1);
			quickSort(input, pindex+1, end);
	}
	void quickSort(int input[], int size)
	{
    		quickSort(input, 0, size - 1);
	}

int main(){
	int arr[]={2, 3, 6, 3, 10, 5, 2};
    int size=sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, size);
	cout<<"sorted array using merge sort:"<<endl;
	for (int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
}