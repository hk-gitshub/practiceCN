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

//4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
int main(){
    binaryTreeNode <int> * root=takeInputLevelWise();
    printLevelWise(root);
	cout<<"checki if binary tree is BST or not by isBST1: "<<isBST1(root)<<endl;
	cout<<"checki if binary tree is BST or not by isBST2: "<<isBST2(root)<<endl;

}
