#include<iostream>
using namespace std;


int main(){
    int n=10;
    // cin>>n;

    int i=1;
    int extraStar=0;
    while(i<=n){
        int space=1;
        while (space<=n-i){
            cout<<" ";
            space++;
        }


        int j=1;
        while(j<=i+extraStar){
            cout<<"*";
            j++;
        }
        cout<<endl;
        extraStar++;
        i++;
    }
    
  
}
