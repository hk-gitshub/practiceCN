#include<iostream>
using namespace std;

int main() {
    int n=5;
    cout<< "enter the number"<<endl;
    
    //  cin >>n;
    
    int d = 2;
    bool divde = false;
    while(d<n){
        
        if (n%d == 0){
            // cout<<" not prime";
            divde=true;
            break;
        }
        d++;
    }
    
    if (!divde){
        cout<<"prime";
    }
    else cout<<"not prime";
}
