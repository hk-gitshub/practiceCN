#include<iostream>
using namespace  std;

bool checkPalin(char input[], int start, int end){

    bool ans;
    if(end == 0 || end == 1) return true;

    if(start>=end && input[start] == input[end]) return true;
    // else return false;

    if (input[start] == input[end]) {
      ans=checkPalin(input, start+1, end-1);
      return ans;
    } else
      return false;

}

int length(char input[], int start){

  if(input[start] == '\0'){
    return 0;
  }

  int len=1+length(input, start+1);
  return len;
}

bool checkPalindrome(char input[]) {
   
   int start=0;
   int end=length(input,start)-1;
   bool ans=checkPalin(input, start, end);
    return ans;
}


int main(){

    char str[]="racecar";
    cout<<"is string plaindoriam? :"<<checkPalindrome(str)<<endl;
    char *st ="hahnah";
    cout<<"is string plaindoriam? :"<<checkPalindrome(st)<<endl;
}