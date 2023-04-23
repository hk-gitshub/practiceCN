#include<iostream>
using namespace std;

bool checkPalindrome(char str[]) {
    
    size_t count =sizeof(str)/sizeof(str[0]);    
    // for(int i=0; str[i] != '\0'; i++ ){
    //     count++;
    // }
    cout<<count<<endl;
    for(int j=0; j<=count; j++){

        if (str[j] != str[count-1]){
            return false;
        }
        count--;
    }
    return true;
}

int main(){
    char name[10]={'i','t','i'};
    cout<<(checkPalindrome(name))?"true":"false";
}