#include<bits/stdc++.h>
using namespace std;
#include "treeNode.h"

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

//node is present or not
bool isPresent(treeNode<int>* root, int x) {
    if(root==NULL) return false;
    if(root->data==x) return true;

     bool ans=false;
    for(int i=0; i<root->children.size(); i++){
        ans=isPresent(root->children[i], x);
        if(ans) return true;;
    }

    // if(ans)return true;
    // else return false;
}

//return the number of nodes which contains data greater than x.
int getLargeNodeCount(treeNode<int>* root, int x) {
    int count=0;
    if(root->data>x) count=1;
    else count=0;

    for(int i=0; i<root->children.size(); i++){
        count+=getLargeNodeCount(root->children[i], x);
    }
                                    // if you dont want to write if statement loop of the above    
                                    // if(count->data>x) return count+1;
                                    // else return count;
    return count;                   
}

// below class and function is example of  Node with maximum child sum 
//********************************************************************************************
class maxNode{
    public:
        int maxSum;
        treeNode<int>* node;

        maxNode(){

        }

        maxNode(treeNode<int>* node, int max){
            this->node=node;
            this->maxSum=max;
        }

};

maxNode maxsumnode(treeNode<int>* root){
    // if(root==NULL) return;

    int sum=root->data;

    for(int i=0; i<root->children.size(); i++){
        sum+=root->children[i]->data;
    }
    
    maxNode MAX(root, sum); //pera meterise controctor call

    maxNode chMax;      // default constructor call

     for(int i=0; i<root->children.size(); i++){
        chMax=maxsumnode(root->children[i]);

        if(MAX.maxSum<chMax.maxSum){
        MAX.maxSum=chMax.maxSum;
        MAX.node=chMax.node;
        }
    }

    return MAX;
}

treeNode<int>* maxSumNode(treeNode<int>* root) {

        if(root==NULL) return  root;
        else {
          maxNode max = maxsumnode(root);
          return max.node;
        }
}
//*************************************************************************************************

//Next larger code

class helper{
    public:
    int value;
    treeNode <int>* node;

    helper(){
    }
    helper(treeNode<int>* node, int value){
        this->node=node;
        this->value=value;
    }
};

helper nextLarger(treeNode<int>* root, int x){
    helper max(NULL, INT_MAX);
    helper maxTemp;
    if(root->data>x){
        max.value=root->data;
        max.node=root;
    }
    for(int i=0; i<root->children.size(); i++){
        if(x<root->children[i]->data&&root->children[i]->data<max.value){
            max.value=root->children[i]->data;
            max.node=root->children[i];
        }
    }
    for(int i=0; i<root->children.size(); i++){
        maxTemp=nextLarger(root->children[i], x);
        if(max.value>maxTemp.value){
            max.value=maxTemp.value;
            max.node=maxTemp.node;
        }
    }
    return max;
}

treeNode<int>* getNextLargerElement(treeNode<int>* root, int x) {
        helper ans=nextLarger(root, x);
        return ans.node;
}
//*************************************************************************************

int main(){
    treeNode<int>*root=takeInputLevelWise();
    printLevelWise(root);
    

}