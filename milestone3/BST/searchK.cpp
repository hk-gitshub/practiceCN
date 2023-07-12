#include"binaryTreeNode.cpp"
#include<bits/stdc++.h>
using namespace std;


bool searchInBST(binaryTreeNode<int> *root , int k) {
	if(root==NULL) return false;
	if(root->data==k) return true;
	
	int ans=false;
	if(root->data>k){
		ans=searchInBST(root->left, k);
	}else{
		ans=searchInBST(root->right, k);
	}
	return ans; 
}
// isBST1 start
int maximum(binaryTreeNode<int> *root){
	if (root==NULL) return INT_MIN;

	int ans=max(root->data, max(maximum(root->left), maximum(root->right)));
	return ans;
}

int minimum(binaryTreeNode<int> *root){
	if (root == NULL) return INT_MAX;

	int ans=min(root->data, min(minimum(root->left), minimum(root->right)));
	return ans;
}

//Time complexity of below code is O(n^h)
//
bool isBST1(binaryTreeNode<int> *root){
	if(root==NULL) return true;

	int leftMax=maximum(root->left);
	int rightMin=minimum(root->left);

	bool output=(leftMax<root->data) && (rightMin>=root->data) && (isBST1(root->left)) && (isBST1(root->right));

	return output;
}

//isBST2 start 
//better apporach
class retunBST{
	public:
		int Max;
		int Min;
		bool isBST;
};

//Time complexity is O(n);
retunBST isBST2Check(binaryTreeNode <int> * root){
	if(root==NULL){				//constant
		retunBST temp;
		temp.Min=INT_MAX;
		temp.Max=INT_MIN;
		temp.isBST =true;
		return temp;
	}

	retunBST leftOP=isBST2Check(root->left);		// TP:n/2
	retunBST rightOP=isBST2Check(root->right);		// TP:n/2

	//constant time
	int minimun=min(root->data, min(leftOP.Min, rightOP.Min));
	int maximum=max(root->data, max(leftOP.Max, rightOP.Max));
	int finalBST=(root->data>leftOP.Max) && (root->data<=rightOP.Min) && leftOP.isBST && rightOP.isBST;

	retunBST output;
	output.Max=maximum;
	output.Min=minimun;
	output.isBST=finalBST;
	return output;
}

bool isBST2(binaryTreeNode<int>* root){
	return isBST2Check(root).isBST;
}

//isBST3 started

bool isBST3(binaryTreeNode <int> * root, int min=INT_MIN, int max=INT_MAX){
	if(root==NULL) return true;

	if(root->data<min || root->data>max){
		return false;
	}

	bool leftOk=isBST3(root->left, min, root->data-1);
	bool rightOk=isBST3(root->right, root->data, max);

	return leftOk && rightOk;
}

// made arr and added all BBST data
// void arr(binaryTreeNode<int>* root, vector<int>& ans){
// 	if(root==NULL) {
// 		return ;
// 	}

// 	arr(root->left, ans);
// 	ans.push_back(root->data);
// 	arr(root->right, ans);
 
// }

// Node<int>* constructLinkedList(binaryTreeNode<int>* root) {
// 	if(root==NULL) return NULL;
// 	vector<int> ans;
// 	arr(root, ans);

// 	int i=1;
// 	Node<int>* head=new Node<int>(ans[0]);
// 	Node<int>* tail=new Node<int>(ans[0]);
// 	while(i<ans.size()){
// 		Node<int>* node=new Node<int>(ans[i]);
// 		tail->next=node;
// 		tail=tail->next;
// 		i++;
// 	}
// 	return head;
// }
void makeArr(binaryTreeNode<int> *root, vector<int>& arr){
	if(root==NULL) return;

	makeArr(root->left, arr);
	arr.push_back(root->data);
	makeArr(root->right, arr);
}

// void pairSum(back_inserter<int> *root, int sum) {
//     if(root==NULL) return;

// 	vector<int> ans;
// 	makeArr(root, arr);

	
// }

//4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
//4 2 6 1 10 5 7 -1 -1 -1 -1 -1 -1 -1 -1
int main(){
    binaryTreeNode <int> * root=takeInputLevelWise();
    printLevelWise(root);
	// cout<<"checki if binary tree is BST or not by isBST1: "<<isBST1(root)<<endl;
	// cout<<"checki if binary tree is BST or not by isBST2: "<<isBST2(root)<<endl;
	// cout<<"checki if binary tree is BST or not by isBST3: "<<isBST3(root)<<endl;

	// Node<int>* head=constructLinkedList(root);
	// while (head!=NULL)
	// {
	// 	cout<<head->data<<" ";
	// }
	// cout<<endl;	
	vector<int> ans;
	makeArr(root, ans);
	for(int i=0; i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
