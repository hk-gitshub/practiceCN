#include<iostream>
using namespace std;

void reverseStringWordWise(char input[]) {
    int n=0;
    for (int i = 0; input[i] != '\0'; i++) {
      n++;
    }

    for(int i=0; i<n; i++){
        int temp=input[i];
        input[i]=input[n-1];
        input[n-1]=temp;
        n--;
    }
    // cout<<"revers: "<<input<<endl;
    int start=0, end, i=0;
    while(input[i] !='\0'){ 
        if (input[i] == ' ' || input[i] == '\0'){
            end=i-1;
            int space=i;
            while(start<end){
                int temp=input[start];
                input[start]=input[end];
                input[end]=temp;
                start++;
                end--;
            }
            start=space+1;
        }
       i++;
    }
    end=i-1;
    while(start<end){
        int temp=input[start];
        input[start]=input[end];
        input[end]=temp;
        start++;
        end--;
    }
}

int main(){

    char str[]="welcome to geeksforgeeks";
    cout<<"original string:"<<str<<endl;
    reverseStringWordWise(str);
    cout<<"reverse string word:"<<str;
}