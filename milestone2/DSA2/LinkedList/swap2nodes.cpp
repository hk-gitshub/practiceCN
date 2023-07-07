#include<bits/stdc++.h>
using namespace std;
#include "takeInout.cpp"

node *swapnodes(node *head, int i, int j)		//Time complexity max(i, j);
{
	if(head==NULL || (i==0 && j==0)) return head;
	// node *temp;
	node *node1=head;
	node *node2=head;
	while(i!=0){		
			node1=node1->next;
			i--;
	}
	while(j!=0){
			node2=node2->next;
			j--;
	}
	int temp=node1->data;
	node1->data=node2->data;
	node2->data=temp;
	return head;
}
// void print(node *head)
// {
// 	node *temp = head;
// 	while (temp != NULL)
// 	{
// 		cout << temp->data << " ";
// 		temp = temp->next;
// 	}
// 	cout << endl;
// }

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i, j;
		node *head = takeInput();
		cin >> i;
		cin >> j;
		head = swapnodes(head, i, j);
		print(head);
	}
	return 0;
}