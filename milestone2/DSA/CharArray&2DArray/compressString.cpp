#include<iostream>
using namespace std;

string compresString(string &input){
    int count = 1, j=0;
    for(int i = 1; i <=input.size() ;i++) {
        
        if(input[i] != input[j] || input[i]=='\0'){
            if (count > 1) {
            char c = count+'0';
            input[++j] = c;
            }
            input[++j] = input[i];
            count = 1;
        } else {
            count++;
        }
    }
    input[++j]='\0';

    return input;
}

int main(){

    string input="xxxxxxxxx";
    
    compresString(input);
   cout<<"converted string: "<<input;
}