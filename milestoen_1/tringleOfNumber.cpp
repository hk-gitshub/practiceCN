#include <iostream>
using namespace std;

int main() {
    
    int n=9;
   //  cin>>n;

    int n1 = n/2 +1;
    int n2= n/2;

    int i = 1;
    while(i<=n1){
      int spaces=1;
      while(spaces<=n1-i){
        cout<<" ";
        spaces++;
      }

      int j=1;
      while(j<=(2*i-1)){
        cout<<"*";
        j++;  
      }
      cout<<endl;
      i++;
    }

    int a=1, s=n2;
    while (a<=n2){
      int space=1;
      while(space<=a){
        cout<<"|";
        space++;
      }

      int k=1;
      
      while(k<=(2*s-1)){
        cout<<"*";
        k++;
      }
      s--;
      cout<<endl;
      a++;
    }
}