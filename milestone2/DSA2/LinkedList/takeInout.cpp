#include<bits/stdc++.h>
using namespace std;
#include"node.cpp"

// this function take O(n) times
node* takeBetterInput(){          //return type is 8 bytes pointer of node    10 20 30 40 -1
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

//this function take O(n2) time 
node* takeInput(){          //return type is 8 bytes pointer of node    10 20 30 40 -1
    int data;
    cin>>data;
    node *head=NULL;
    while (data != -1)      // take input until data = -1 
    {
        node *newNode=new node(data);       //dynamic node creation with parameterize constructor call
        if(head==NULL){
            head=newNode;
        }else{
            node *temp=head;
            while(temp->next!=NULL){        //traverse the whole LL until get the last node and 
                temp=temp->next;
            }
            temp->next=newNode;             // connect to the new node address
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

// int main(){
//     node *n=takeBetterInput();
//     cout<<"Linked List: ";
//     print(n);
// }