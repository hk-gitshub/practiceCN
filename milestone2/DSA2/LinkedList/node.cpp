#include<bits/stdc++.h>
// using namespace std;
class node
{
public:
    int data;   // int type of data save
    node *next; // save address of next node so data type is node

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};


