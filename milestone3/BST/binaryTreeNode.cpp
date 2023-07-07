#include<bits/stdc++.h>
using namespace std;

template <typename T>
class binaryTreeNode
{
    public:
    T data;
    binaryTreeNode<T>* left;
    binaryTreeNode<T>* right;
        binaryTreeNode(T data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
        ~binaryTreeNode(){
            delete left;
            delete right;
        }
};

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