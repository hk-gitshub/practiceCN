#include<iostream>
using namespace std;

// print pattern
// 1
// 12
// 123
// 1234
// 12345
int main()
{
    int n=5;
    cout<<"enter n"<<endl;
    // std::cin >> n;
    
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}
