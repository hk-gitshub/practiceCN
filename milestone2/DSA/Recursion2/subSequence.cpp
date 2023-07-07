#include<iostream>
// #include<string>
using namespace std;

int subse(string input, string *output){
    if(input.size()==0) {
        output[0]="";
        return 1;
    }

    string smallStr= input.substr(1);
    int smallOutputSize=subse(smallStr, output);
    for (int i = 0; i < smallOutputSize; i++)
    {
        output[i+smallOutputSize]=input[0]+output[i];
    }
    
    return 2*smallOutputSize;
}

int main(){
    string input="abce";
    // int size=2^(sizeof(input)/sizeof(input[0]));
    string* output=new string[1000];

    int count=subse(input, output); 
    for(int i=0; i<count; i++){
        cout<<output[i]<<endl;
    }  
}