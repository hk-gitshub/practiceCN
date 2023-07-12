#include<bits/stdc++.h>
using namespace std;
#include "binaryTreeNode.h"

void printBinaryTree(binaryTreeNode<int>* root){
        if(root==NULL) return;
        cout<<root->data<<":";
        if(root->left!=NULL){
            cout<<"L"<<root->left->data;
        }
        if(root->right!=NULL){
            cout<<"R"<<root->right->data;
        }
        cout<<endl;

        printBinaryTree(root->left);
        printBinaryTree(root->right);
}

binaryTreeNode<int> * takeInput(){
    int rootData;
    cout<<"enter data: ";
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }

    binaryTreeNode <int> * root=new binaryTreeNode<int>(rootData);
    binaryTreeNode <int> * leftchild= takeInput();
    binaryTreeNode <int> * rightchild= takeInput();
    root->left=leftchild;
    root->right=rightchild;

    return root;
}

binaryTreeNode<int> * takeInputLevelWise(){
    int rootData;
    cout<<"Enter the root data"<<endl;
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    binaryTreeNode<int>* root=new binaryTreeNode<int>(rootData);
    queue<binaryTreeNode<int>*> pendingNode;
    pendingNode.push(root);

    while (pendingNode.size()!=0)
    {
        binaryTreeNode<int>* front=pendingNode.front();
        pendingNode.pop();

        int leftChild, rightChild;
        cout<<"Enter the data of left child of "<<front->data<<endl;
        cin>>leftChild;
        if(leftChild!=-1){
            binaryTreeNode<int>* leftC=new binaryTreeNode<int>(leftChild);
            pendingNode.push(leftC);
            front->left=leftC;
        }   
        cout<<"Enter the data of right child of "<<front->data<<endl;
        cin>>rightChild;
        if(rightChild!=-1){
            binaryTreeNode<int>* rightC=new binaryTreeNode<int>(rightChild);
            pendingNode.push(rightC);
            front->right=rightC;
        } 
    }
    return root;
}

void printLevelWise(binaryTreeNode<int> *root) {
	queue <binaryTreeNode<int> *> pendingNode;
	pendingNode.push(root);

	while(pendingNode.size() != 0){
		binaryTreeNode<int> * front=pendingNode.front();
		pendingNode.pop();
		cout<<front->data<< ":L:";
                if (front->left != NULL) {
                  cout << front->left->data;
				  pendingNode.push(front->left);
                }else {
					cout<<-1;
				}
				if (front->right != NULL) {
                  cout<<",R:"<<front->right->data;
				  pendingNode.push(front->right);
                }else {
					cout<<",R:"<<-1;
				}
        cout<<endl;
		
	}
}

int countNode(binaryTreeNode<int>* root){
    if(root==NULL) return 0;
    int count=0;

    count=countNode(root->left)+countNode(root->right)+1;

    return count;
}

bool isNodePresent(binaryTreeNode<int> *root, int x) {
    
    if(root==NULL) return false;

    if(root->data==x){
        return true;
    }

    // bool ans;
    if (isNodePresent(root->left, x) || isNodePresent(root->right, x) ){
        return true;
    }else{
        return false;
    }
}

int Max(int p1, int p2){
	if(p1 > p2){
		return p1;
	} else{
		return p2;
	}
}

int height(binaryTreeNode<int>* root) {
    if(root==NULL) return 0; 

	int h=Max(height(root->left), height(root->right));

	return h+1;

}

void mirrorBinaryTree(binaryTreeNode<int>* root) {
    if(root==NULL) return;


	mirrorBinaryTree(root->left);
	mirrorBinaryTree(root->right);

	binaryTreeNode<int> * temp=root->left;
	root->left=root->right;
	root->right=temp;
}
// in-order traversal
void inorder(binaryTreeNode<int>* root){
    if(root==NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);   
}

//pre order traversal
void preOrder(binaryTreeNode<int> *root) {
	if(root==NULL) return;

	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}

//post order traversal
void postOrder(binaryTreeNode<int> *root) {
	if(root==NULL) return;

	postOrder(root->left);
	postOrder(root->right);

	cout<<root->data<<" ";
}

//  input
//5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
//1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1 

int main(){
   /* binaryTreeNode <int> * root= new binaryTreeNode<int>(1);
    binaryTreeNode <int> * node1= new binaryTreeNode<int>(2);
    binaryTreeNode <int> * node2= new binaryTreeNode<int>(3);
    root->left=node1;
    root->right=node2;*/
    binaryTreeNode <int> * root=takeInputLevelWise();
    printBinaryTree(root);
    cout<<"Number of nodes present in B tree: "<<countNode(root)<<endl;
    cout<<"is 5 present in the Binary tree : "<<isNodePresent(root, 5)<<endl;
    cout<<"height of the binary tree: "<<height(root)<<endl;
    cout<<"original binary tree :"<<endl;
    printBinaryTree(root);
    mirrorBinaryTree(root);
    cout<<"mirror binary tree: "<<endl;
    printBinaryTree(root); 
    cout<<" in-order traversal:"<<endl;
    inorder(root);
    cout<<" \npre-order traversal:"<<endl;
    preOrder(root);
    cout<<" \npost-order traversal:"<<endl;
    postOrder(root);
    cout<<endl;
}