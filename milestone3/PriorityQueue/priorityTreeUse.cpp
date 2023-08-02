#include<bits/stdc++.h>
using namespace std;
#include"min-maxHeap.h"

int main(){
    maxHeap p;
    p.insert(100);
    p.insert(25);
    p.insert(9);
    p.insert(20);
    p.insert(15);
    p.insert(0);

    cout<<p.getSize()<<endl;
    cout<<p.getMax()<<endl;
    
    while (!p.isEmpty())
    {
        cout<<p.removeMax()<<" ";
    }
    cout<<endl;
    
}