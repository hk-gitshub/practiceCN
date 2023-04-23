#include <iostream>
using namespace std;

bool isSorted2(int a[], int size){
    if(size==0 || size==1){
        return true;
   }

   bool smallop= isSorted2(a+1, size-1);        //a[]={1,2,3,1,5};

   if(!smallop){
    return false;
   }

    if(a[0]>a[1]){
        return false;
   }else{
        return true;
   }
}

bool isSorted(int a[], int size){
   
   if(size==0 || size==1){
        return true;
   }

   if(a[0]>a[1]){
        return false;
   }

   bool smallop= isSorted(a+1, size-1);

   return smallop;

}

int main() {
    int a[]={1,2,3,4,5};
    int size=5;

    cout<<" f1: "<<isSorted(a, size);
    cout<<" f2: "<<isSorted2(a, size);

}
