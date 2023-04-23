#include<iostream>
using namespace std;

char highestOccurringChar(char input[]) {
    
    int freqArr[256]={0};
    char ans;
    int max=0;

    for(int i=0; input[i]!='\0'; i++){
        freqArr[input[i]]++;
        if (max < freqArr[input[i]]) {
          max = freqArr[input[i]];
          ans = input[i];
        }
    }
    for(int i=0; input[i]!='\0'; i++){
        if (max ==freqArr[input[i]]) {
          // max = freqArr[input[i]];
          ans = input[i];
          break;
        }
    }
    return ans;
}

int main(){

    char input[]= "xabbaxba";
    
    cout<<highestOccurringChar(input);
}