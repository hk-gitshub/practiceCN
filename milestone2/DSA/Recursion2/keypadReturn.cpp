#include<iostream>
#include <string>
using namespace std;

int keypad(int num, string output[]){
    if(num == 0 || num ==1){
        output[0] = "";
        return 1;
    }
    
        int smallnum = num%10;
        num = num/10;
        int smalloutputsize = keypad(num, output);
      string character;    
    if (smallnum==2) character="abc";
    else if (smallnum==3) character= "def";
    else if (smallnum==4) character= "ghi";
    else if (smallnum==5) character= "jkl";
    else if (smallnum==6) character= "mno";
    else if (smallnum==7) character="pqrs";
    else if (smallnum==8) character="tuv";
    else if (smallnum==9) character="wxyz";
    int ans_size=smalloutputsize*(character.size());
    string temp[ans_size];
    int k=0;
    for(int i=0; i<smalloutputsize; i++){
        for(int j=0; j<character.size(); j++){
            temp[k] = output[i]+character[j];
            k++;
        }
        
    }
    for(int i=0; i<ans_size; i++){
        output[i] = temp[i];
    }
    return character.size()*smalloutputsize;
}

int main(){
    int num=234;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;

        
}