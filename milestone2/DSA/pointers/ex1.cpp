#include<iostream>
using namespace std;

void print(int * p){
    cout<<"pointer is: "<<*p<<endl;
    (++*p);
}

int increment1(int *p){
    p=p+1;
    int ans =*p;
    return ans;
}

int main(){
    int i=10;
    int * p=&i;
    // int **dp=&p;
    print(p);  
    cout<<"increment value: "<<increment1(p)<<endl;
    cout<<*p<<endl;  

    int t=98;
    char ch =t+'0';
    char c='T';
    int it;
    // it=int(c);
    it=c-'0';
    cout<<"interger to character: "<<ch<<endl<<"character to intger: "<<it<<endl;
}