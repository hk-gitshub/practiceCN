#include<bits/stdc++.h>
using namespace std;

class stackUsingArray{
    // public:

    int *data;
    int nextIndex;
    int capacity;

    public:
   //stack constructor to make fixed size of stack 
    stackUsingArray(){
        this->capacity=4;
        this->data=new int[capacity];
        this->nextIndex=0;
    }

    //number of elements present in stack
    int size(){
        return nextIndex;
    }

    //insert into stack
    void push(int value){
        if(nextIndex==capacity){
            // cout<<"Stack Overflow"<<endl;
            // return;

            //To make dynamic stack
            int *newdata=new int[capacity*2];
            for (int i = 0; i < nextIndex; i++){
                newdata[i]=this->data[i];
            }
            delete data;
            data=newdata;
            capacity*=2;
        }
        data[nextIndex]=value;
        nextIndex++;
    }

    //return top of the stack
    int top(){
        if(nextIndex==0){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return data[nextIndex-1];
    }

    //delete element top of the stack
    int pop(){
        nextIndex--;
        return data[nextIndex];
    }

    //check satack is empty or not
    bool isEmpty(){
        return nextIndex==0;
    }

};

