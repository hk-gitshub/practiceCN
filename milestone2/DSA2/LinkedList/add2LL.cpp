#include<bits/stdc++.h>
using namespace std;
 
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
    void addAtTail(ListNode* &outputHead, ListNode* &outputTail, int digit){
        ListNode* temp=new ListNode(digit);
        if(outputHead==NULL){
            outputHead=temp;
            outputTail=temp;
        }else{
            outputTail->next=temp;
            outputTail=outputTail->next;
        }
    }
public:
    ListNode* addTwoNumbers1(ListNode* l1, ListNode* l2) {
        ListNode* head1=l1;
        ListNode* head2=l2;
        ListNode* outputHead=NULL;
        ListNode* outputTail=NULL;
        
        int carry=0;
        while(head1 != NULL && head2 != NULL){
            int sum=head1->val + head2->val + carry;
            carry=sum/10;
            int digit=sum%10;

            //add digit in output LinkList
            addAtTail(outputHead, outputTail, digit);
            head1=head1->next;
            head2=head2->next;
        }
        
        while(head1 != NULL){
            int sum=head1->val+ carry;
            carry=sum/10;
            int digit=sum%10;

            addAtTail(outputHead, outputTail, digit);
            head1=head1->next;
        }

        while(head2 != NULL){
            int sum=head2->val + carry;
            carry=sum/10;
            int digit=sum%10;

            addAtTail(outputHead, outputTail, digit);

            head2=head2->next;
        }

        while(carry!=0){
            int sum=carry;
            carry=sum/10;
            int digit=sum%10;

            addAtTail(outputHead, outputTail, digit);
        }
    
    return outputHead;
    }

    ListNode* addTwoNumbers2(ListNode* l1, ListNode* l2) {
        ListNode* head1=l1;
        ListNode* head2=l2;
        ListNode* outputHead=NULL;
        ListNode* outputTail=NULL;
        
        int carry=0;
        while(head1 != NULL || head2 != NULL || carry !=0){
            int p=0;
            if(head1!=NULL){
                p=head1->val;
            }

            int q=0;
            if(head2!=NULL){
                q=head2->val;
            }
            int sum=p + q + carry;
            int digit=sum%10;

            //add digit in output LinkList
            addAtTail(outputHead, outputTail, digit);

            carry=sum/10;
            if(head1!=NULL)
                head1=head1->next;
            if(head2!=NULL)
                head2=head2->next;
        }
    
    return outputHead;
    }
};