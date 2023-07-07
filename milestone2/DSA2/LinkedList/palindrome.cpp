#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};


// #include "solution.h"

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

Node *mid(Node *head){
	Node *slow=head;
	Node *fast=head->next;

	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}

Node *reverse(Node *head){
	if(head==NULL || head->next==NULL){
		return head;
	}

	Node *smlAns=reverse(head->next);
	Node *temp=smlAns;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=head;
	head->next=NULL;
	return smlAns;
}

void print(Node *head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
    
}

bool isPalindrome(Node *head)
{	
	if(head==NULL ) return true;
    // Node *temp=head;
	Node *midNode=mid(head);
	Node *head2=midNode->next;
	midNode->next=NULL;
    print(head2);
	head2=reverse(head2);
    print(head2);

	while(head!=NULL && head2!=NULL){
		if(head->data!=head2->data){
			return false;
		}
        head2=head2->next;
        head=head->next;
	}
	return true;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}