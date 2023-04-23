#include<iostream>
using namespace std;

void replaceCharacter(char input[], char c1, char c2) {

    for(int i=0; input[i] != '\0'; i++){
        if (input[i] == c1){
            input[i]=c2;
        }   
    }

}

int main(){
    char str[]="rabbit";
    char c1='i', c2='a';
    cout<<"original str:"<<str<<endl;
    replaceCharacter(str, c1, c2);

    cout<<"after replace character:"<<str;
}