#include<bits/stdc++.h>

using namespace std;

int main(){
    int i=10; //store in stack

    int *p = new int;   // 4 bytes on heap and 8 bytes on stack

    delete p;           // realese new int;

    p = new int;        // now points to another new int

    *p =10;

    cout<<*p<<endl;

    delete p;

    p = new int[10];       // now it is point int array made dynamically

    p[0]=12;

    cout<<p[0]<<endl;
    
    delete []p;            // realese new int array.

}

