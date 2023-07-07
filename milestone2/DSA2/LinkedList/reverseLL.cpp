#include<bits/stdc++.h>
using namespace std;
#include"takeInout.cpp"

class Pair{

	public:

		node *head;
		node *tail;
};
//we are using object or class funtion (class data types)  when we want two or more return types in funtion 
Pair reverseLLBetter(node *head){			
	if(head==NULL || head->next==NULL){
		Pair ans;
		ans.head=head;
		ans.tail=head;
		return ans;
	}
	Pair smallAns=reverseLLBetter(head->next);

	smallAns.tail->next=head;
	head->next=NULL;

	Pair ans;
	ans.head=smallAns.head;
	ans.tail=head;
	return ans;

}

node *reverseLinkedListRec2(node *head){
	Pair ans=reverseLLBetter(head);
	return ans.head;
}

node *reverseLinkedListRec(node *head)
{
    if( head==NULL || head->next==NULL) return head;

	node *newHead=reverseLinkedListRec(head->next);

	node *temp=head;
	// head->next->next=temp;
	// head->next=NULL;

    //2nd approach
	//below approach gives O(n^2) TC
    while (temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=head;
	head->next=NULL;

	return newHead;
}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		node *head = takeInput();
		int n;
		cout<<"enter 1 OR 2:"<<endl;
		cin>>n;
		if(n==1){
			head = reverseLinkedListRec2(head);
			cout<<"Time complexity: O(n^2)"<<endl;
			print(head);
		}else{
			head= reverseLinkedListRec2(head);
			cout<<"Time complexity: O(n)"<<endl;
			print(head);
		}
	}

	return 0;
}