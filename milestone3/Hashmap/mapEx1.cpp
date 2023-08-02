#include<iostream>
#include <unordered_map>
using namespace std;

int highestFrequency(int arr[], int n) {
    int maxFreq=0;
    int maxNum=0;
    unordered_map<int, int> frequency;
    for(int i=n-1; i>=0; i--){              // iterate loop in reverse order to setisfy the condition
        if(frequency.count(arr[i])>0){  // if 2 has same maxfreq
            frequency[arr[i]]++; 
        } else {
          frequency[arr[i]] = 1;
        }
        if (frequency[arr[i]] >= maxFreq) {
          maxFreq = frequency[arr[i]];
          maxNum = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<":"<<frequency[arr[i]]<<endl;
    }
    
    return maxNum;
}

int main(){
    int a[]={1,2,2,1,3,1,2,2};   
    int size=8;
    cout<<"The number with maximum occurrence is: "<<highestFrequency(a,size)<<endl;
}