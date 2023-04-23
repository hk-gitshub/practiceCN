#include<iostream>
using namespace std;

bool checkNumber(int input[], int size, int x) {
if(size == 0 || size==1){
  if(input[0]!=x) return false;
  else return true;
}

if(input[0]==x){
  return true;
}
bool check=checkNumber(input+1, size-1, x);
return check;

}

int main(){
    int x=5;
    int arr[]={3,4,6,1,6,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<" Is number present: "<<true<<endl;
}
