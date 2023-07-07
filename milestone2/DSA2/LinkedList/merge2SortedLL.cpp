#include<bits/stdc++.h>
using namespace std;
// #include"node.cpp"
#include "takeInout.cpp"

node *mergeTwoSortedLinkedLists(node *head1, node *head2)
{	
	if(head1==NULL) return head2;
	if(head2==NULL) return head1;
    node *finalHead=NULL;
	node *finalTail=NULL;

	if(head1->data>=head2->data) {		
		finalTail=head2;
		finalHead=head2;
		head2=head2->next;

	}else{
		finalTail=head1;
		finalHead=head1;
		head1=head1->next;
	}

	while(head1 != NULL && head2!=NULL){
		if(head1->data < head2->data){
			finalTail->next=head1;
			finalTail=head1;
			head1=head1->next;
			} else {
			finalTail->next = head2;
			finalTail=finalTail->next;
			head2 = head2->next;
		}
    }
	if(head1==NULL) finalTail->next=head2;
	else finalTail->next=head1;

	return finalHead;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		node *head1 = takeInput();
		node *head2 = takeInput();
		node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}

