#include<iostream>
using namespace std;

bool checkMember(int n){

  int n1=0, n2=1;
  int fibo=0;
  while(fibo<=n){
    
    if (fibo==n){ return true;}
    fibo=n1+n2;
    n1=n2;
    n2=fibo;
  }

return false;
}

int main(){
    int n=13;
    if (checkMember) cout<<"true";
    else cout<<"false";
}
