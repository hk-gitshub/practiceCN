#include<bits/stdc++.h>
using namespace std;
#include"node.cpp"

void print(node *head){
    node *temp=head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

    temp=head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    //statically
    node n1(12);
    node *head=&n1;
    node n2(13);
    n1.next=&n2;
    // cout<<n1.data<<" "<<n2.data<<endl;
    // cout<<head->data;       // print the data that node which address store in head pointer
    //cout<<(*head).data;

    // dynamically
    node *n3=new node(10);
    node *n4=new node(11);
    node *n5=new node(12);
    node *head1=n3;
    n3->next=n4;
    n4->next=n5;
    print(head1);
    print(head1);
}