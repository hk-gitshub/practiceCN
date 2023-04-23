#include<bits/stdc++.h>
using namespace std;

void shiftchar(char input[]){               // using recursion to shift char

    if(input[0]=='\0') return;

    input[0]=input[1];
    shiftchar(input+1);
}

void removeX(char input[]) {
    
    if(input[0] == '\0'){
        return;
    }
    removeX(input+1);

    if(input[0] == 'x'){                //xadxvv
        shiftchar(input);
    // for(int i=0; input[i] != '\0'; i++)      using for loop to shift chars
    
    //     input[i]=input[i+1];
    }
    else return;

}

int main(){

    char arr[]="xadxvxx";
    char *p=&arr[0];

    removeX(p);
    cout<<"remove x: "<<p<<endl;

}