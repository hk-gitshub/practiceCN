#include<bits/stdc++.h>
using namespace std;
#include"binaryTreeNode.h"
#include"useBinaryTree.cpp"

//build tree from preorder and inorder

binaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    
		int rootData=preorder[0];
		binaryTreeNode<int>* root=new binaryTreeNode<int>(rootData);

		if(preLength==1) return root;
		else if (preLength==0)return NULL;
		else{
			int rootIndex=0;
			while(preorder[0]!=inorder[rootIndex]){
				rootIndex++;
			}

			int leftLength=rootIndex;
			int rightLength=inLength-rootIndex-1;

			binaryTreeNode<int>* leftTree=buildTree(preorder+1, leftLength, inorder, leftLength);
			binaryTreeNode<int>* rightTree=buildTree(preorder+1+rootIndex, rightLength, inorder+rootIndex+1, rightLength);

			root->left=leftTree;
			root->right=rightTree;

			return root;
		}
}

// build tree form post order and inorder

binaryTreeNode<int>* helper(int *post, int *inO, int postS, int postE, int inS, int inE){
	if(inS>inE) return NULL;

	int rootData=post[postE];
	int inRootIndex=-1;
	for(int i=inS; i<=inE; i++){
		if(rootData==inO[i]){
			inRootIndex=i;
			break;
		}
	}
	int linS=inS;
	int linE=inRootIndex-1;
	int rinS=inRootIndex+1;
	int rinE=inE;
	int lpostS=postS;
	int lpostE=linE-linS+lpostS;
	int rpostS=lpostE+1;
	int rpostE=postE-1;
	
	binaryTreeNode<int>* root=new binaryTreeNode<int>(rootData);
	root->left=helper(post, inO, lpostS, lpostE, linS, linE);
	root->right=helper(post, inO, rpostS, rpostE, rinS, rinE);

	return root;
}


binaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
    return helper(postorder, inorder, 0, inLength-1, 0, inLength-1);
}


int main(){
   /* binaryTreeNode <int> * root= new binaryTreeNode<int>(1);
    binaryTreeNode <int> * node1= new binaryTreeNode<int>(2);
    binaryTreeNode <int> * node2= new binaryTreeNode<int>(3);
    root->left=node1;
    root->right=node2;*/
    // binaryTreeNode <int> * root=takeInputLevelWise();
    // printBinaryTree(root);
    // cout<<"Number of nodes present in B tree: "<<countNode(root)<<endl;
    // cout<<"is 5 present in the Binary tree : "<<isNodePresent(root, 5)<<endl;
    // cout<<"height of the binary tree: "<<height(root)<<endl;
    // cout<<"original binary tree :"<<endl;
    // printBinaryTree(root);
    // mirrorBinaryTree(root);
    // cout<<"mirror binary tree: "<<endl;
    // printBinaryTree(root); 
    // cout<<" in-order traversal:"<<endl;
    // inorder(root);
    // cout<<" \npre-order traversal:"<<endl;
    // preOrder(root);
    // cout<<" \npost-order traversal:"<<endl;
    // postOrder(root);
    int arr[]={1, 2, 4, 5, 3, 6, 7};
    int arr2[]={4, 2, 5, 1, 6, 3, 7};
    int n = sizeof(arr)/sizeof(arr[0]);


    cout<<"Build tree from preorder and inorder:"<<endl;
    // binaryTreeNode<int>* root=buildTree(arr, n, arr2, n);
    printBinaryTree(buildTree(arr, n, arr2, n));

}