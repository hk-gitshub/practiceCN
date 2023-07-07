#include<bits/stdc++.h>
using namespace std;
#include"treeNode.h"

//take input using recursion
treeNode<int> * takeInput(){
    int rootData;
    cout<<"enter the data:"<<endl;
    cin>>rootData;
    treeNode<int>* root=new treeNode<int>(rootData);

    int n;
    cout<<"enter the number of node for rootdata: "<<rootData<<":"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"take input for this rootdata:"<<rootData<<endl;
        treeNode<int> * child=takeInput();
        root->children.push_back(child);
    }
    return root;
}


// Take input level wise
treeNode<int> * takeInputLevelWise(){
    int rootData;
    cout<<"Enter the data:"<<endl;
    cin>>rootData;
    treeNode <int>* root=new treeNode<int>(rootData);

    //we use queue for level wise made tree
    queue<treeNode<int>*> pendingNode;
    pendingNode.push(root);

    while (pendingNode.size() != 0)
    {
        treeNode<int> * front=pendingNode.front(); //get front of queue
        pendingNode.pop();  //remove front(top) of the queue 

        int numChild;
        cout<<"enter the number of child for "<<front->data<<endl;
        cin>>numChild;

        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout<<"enter the data for "<<i<<"th child of "<<front->data<<" node"<<endl;
            cin>>childData;
            treeNode<int>* childNode=new treeNode<int>(childData);
            front->children.push_back(childNode);
            pendingNode.push(childNode);
        }        
    }
    return root;
}


//print tree
void printTree(treeNode<int> * root){

    //this is not base case
    //it's edge case 
    //in this function base case is not present bcoz it;s called automatically
    if(root==NULL) return; 

    cout<<root->data<<":";

    for(int i=0; i<root->children.size(); i++){
        cout<<root->children[i]->data<<" ";
    }
    cout<<endl;
    for(int i=0; i<root->children.size(); i++){
        printTree(root->children[i]);
    }
}

//print tree level wise
void printLevelWise(treeNode<int> * root ){
    queue <treeNode<int>*> pendingNode;
    pendingNode.push(root);

     while(pendingNode.size()!=0){
        treeNode<int>* front=pendingNode.front();
        pendingNode.pop();
        cout<<front->data<<":";
        for(int i=0; i<front->children.size(); i++){
            cout<<front->children[i]->data<<",";
            pendingNode.push(front->children[i]);
        }
        cout<<endl;
     }
}

//Number nodes present in generic tree
int countNode(treeNode<int>* root){
    int ans=1;
    for(int i=0; i<root->children.size(); i++){
        ans+=countNode(root->children[i]);
    }
    return ans;
}


//sum of Nodes in tree
int sumOfNodes(treeNode<int>* root){
    int ans=root->data;

    for(int i=0; i<root->children.size();i++){
        ans+=sumOfNodes(root->children[i]);
    }
    return ans;
}

//max node in the tree
treeNode<int> * treeMaxNode(treeNode<int> * root){
    treeNode<int> * maxNode=root;
    int max=root->data;

    for(int i=0; i<root->children.size(); i++){
        treeNode<int> * tempMaxNode=treeMaxNode(root->children[i]);
        int tempMax=tempMaxNode->data;

        if(max<tempMax){
            maxNode=tempMaxNode;
            max=tempMax;
        }
    }
    return maxNode;
}

// Height of the tree
int heightOfTheTree(treeNode<int> * root){
    if(root==NULL) return 0;

    int height=0;
    for(int i=0; i<root->children.size(); i++){
        height=max(height, heightOfTheTree(root->children[i]));
    }
    height+=1;
    return height;
}

//Depth of the tree
//print all node at k level

void depthOfTheNode(treeNode<int>* root, int k){
    //edge case
    if(root==NULL) return;

    //base case -> when k=0 print node
    if(k==0) {
        cout<<root->data<<endl;
    }
    for(int i=0; i<root->children.size(); i++){
        depthOfTheNode(root->children[i], k-1);
    }
}

//get count of leaf node 
//leaf node means who node doesn't have child node
int getLeafNodeCount(treeNode<int>* root) {
    //edge case
    if(root==NULL) return 0;
    if(root->children.size()==0){
        return 1;
    }

    int count=0;
    for(int i=0; i<root->children.size(); i++){
      count +=   getLeafNodeCount(root->children[i]); 
    }
    return count;
}

//Traversal

//Pre-oreder traversal

void preorder(treeNode<int>* root){
    //Edge case
    if (root == NULL) 
        return ; 

    cout<<root->data<<" ";

    for(int i=0; i<root->children.size(); i++){
        preorder(root->children[i]);
    }
}

//post order traversal
void printPostOrder(treeNode<int>* root) {
    //Edge case
    if (root==NULL) return;
    //base case
   if (root->children.size() == 0) {
          cout << root->data << " ";
          return;
        }

    for(int i=0; i<root->children.size(); i++){
        printPostOrder(root->children[i]);
        
    }

    cout<<root->data<<" ";

}

//Delete tree
void deleteTree(treeNode<int> *root){
    for(int i=0; i<root->children.size(); i++) {
        deleteTree(root->children[i]);
    }  
    delete root;
}

//10 3 20 30 40 2 400 50 0 0 0 0
int main(){
    // treeNode<int>* root = new treeNode<int>(1);
    // treeNode<int>* node1 = new treeNode<int>(2);
    // treeNode<int>* node2 = new treeNode<int>(3);

    // root->children.push_back(node1);
    // root->children.push_back(node2);

    treeNode<int>*root=takeInputLevelWise();
    printLevelWise(root);
    cout<<"number of nodes in generic tree are :"<<countNode(root)<<endl;
    depthOfTheNode(root, 2);    
    preorder(root);
    //1st way to delete tree
    cout<<"1st way to delete tree";
    deleteTree(root);
    
    //2nd way to delete tree
    //using distructor
    delete root;

}