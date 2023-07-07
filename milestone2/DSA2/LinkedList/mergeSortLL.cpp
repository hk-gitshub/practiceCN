#include<bits/stdc++.h>
using namespace std;
#include"takeInout.cpp"

node *midPoint(node *head){
	node *fast=head->next;
	node *slow=head;

	if(fast != NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}

node *merge(node *h1, node *h2){
	node *finalHead=NULL;
	node *finalTail=NULL;
	if(h1->data>=h2->data){
		finalHead=h2;
		finalTail=h2;
		h2=h2->next;
	}else{
		finalHead=h1;
		finalTail=h1;
		h1=h1->next;
	}

	while(h1!=NULL && h2!=NULL){
		if(h1->data > h2->data){
			finalTail->next=h2;
			finalTail=finalTail->next;
			h2=h2->next;
		}else{
			finalTail->next=h1;
			finalTail=finalTail->next;
			h1=h1->next;
		}
	}
	if(h1==NULL){
		finalTail->next=h2;
		// finalTail=finalTail->next;
	}else{
		finalTail->next=h1;
		// finalTail=finalTail->next;
	}
	return finalHead;
}

node *mergeSort(node *head)
{
	if(head==NULL || head->next==NULL){
		return head;
	}

	node *midpoint=midPoint(head);
	node *h1=head;
	node *h2=midpoint->next;
	midpoint->next=NULL;

	h1=mergeSort(h1);
	h2=mergeSort(h2);
	node *FinalHead=merge(h1, h2);

	return FinalHead;

}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		node *head = takeInput();
		head = mergeSort(head);
		print(head);
	}

	return 0;
}