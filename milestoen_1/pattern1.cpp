#include<iostream>
using namespace std;

// print pattern :
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
int main()
{
    int n=5;
    cout<<"enter n"<<endl;
    // std::cin >> n;
    
    int i=1;
    int value=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<value<<" ";
            j++;
            value++;
        }
        cout<<endl;
        i++;
    }
}
