#include<iostream>
#include <climits>
using namespace std;

int main(){
    int n=99;
    // cin>>n;
    int arr[INT_MAX];

    double sum=0;
    for (int i=0; i<n; i++){
        cin>>arr[i];

        i++;

    }
    
    for(int i=0; i<n; i++){
        sum += arr[i];
        i++;   
    }

    cout<<sum;
}


