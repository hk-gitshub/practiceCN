#include<bits/stdc++.h>
using namespace std;

void wavePrint(int input[][], int nRows, int mCols)
{
    int i=0, j=0;
    while(i<mCols){

        if (i%2==0){        // if ith column even then top to bottom 
            j=0;
            while(j<nRows){
            cout<<input[j][i]<<" ";
            j++;                                                                                                                                        
        }
        }
        else{                    // if ith column odd then bottom to top 
            j=nRows-1;
            while( j>=0){
                cout<<input[j][i]<<" ";
                j--;
            }
        }
        i++;
    }
    
}

int main(){

    int n=4, m=3;
    int arr[n][m] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    wavePrint(arr, n, m);
}