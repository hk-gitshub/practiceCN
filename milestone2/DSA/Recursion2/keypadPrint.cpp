#include <iostream>
#include <string>
using namespace std;

string getstring(int n){
    string character;
    if (n==2) character="abc";
    else if (n==3) character= "def";
    else if (n==4) character= "ghi";
    else if (n==5) character= "jkl";
    else if (n==6) character= "mno";
    else if (n==7) character="pqrs";
    else if (n==8) character="tuv";
    else if (n==9) character="wxyz";

    return character;
}

void subSequence(int num, string output){
    if(num==0){
        cout<<output<<endl;
        return;
    } 
    int n= num%10;   
    string smallStr=getstring(n);
    num/=10;

    for(int i=0; i<smallStr.size(); i++){
        subSequence(num, smallStr[i]+output);
    }

}

void printKeypad(int num){
    string output="";
    subSequence(num, output);

}


int main(){
    int num=234;
    printKeypad(num);

}