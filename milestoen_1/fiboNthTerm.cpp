#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n=10;
        // cin>>n;

        int n1=0, n2=1;
        int fibo;
        // cout<<n1<<n2;
        if (n==0) fibo=0;
        else if (n==1) fibo = 1;
        else {
          for (int i = 0; i <= n - 2; i++) {
            fibo = n1 + n2;
            // cout<<fibo;
            n1 = n2;
            n2 = fibo;
          }
        }
        cout<<fibo;
}