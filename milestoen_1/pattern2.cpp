#include<iostream>
using namespace std;

int main(){
    int n=4;
    int i=1, value=1;
    while (i<=n)
    {   
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
         int j=1;
        while(j<=i){
            cout<<value;
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
    

}