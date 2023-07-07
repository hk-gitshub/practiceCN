#include<bits/stdc++.h>
using namespace std;
#include"node.cpp"

node* insertNode(node *head, int data, int i){
    node *temp=head;
    int count=0;
    node *newNode=new node(data);
    if(i==0){
        newNode->next=head;
        head=newNode;
    }
    else{
        while(count<i-1){
            temp=temp->next;
            count++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    return head;
}

node* takeBetterInput(){          //return type is 8 bytes pointer of node    10 20 30 40 50 -1
    int data; 
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while (data != -1)      // take input until data = -1 
    {
        node *newNode=new node(data);       //dynamic node creation with parameterize constructor call
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;             // connect to the new node address
            tail=tail->next;   
        //or tail=newNode;
        }

        cin>>data;
    }
    return head;
}

void print(node *head){
    node *temp=head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}

int main(){
    node *n=takeBetterInput();
    int i; 
    int data;
    cin>>data>>i;
    cout<<"Linked List: ";
    print(n);
    n=insertNode(n, data, i);
    cout<<"Updated Linked List: ";
    print(n);
}