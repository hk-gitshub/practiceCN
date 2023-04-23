#include<iostream>
using namespace std;

int main(){

    int raw=5, col=4;
    int **p = new int * [raw];

    for(int i=0; i<raw; i++){
        p[i] = new int [col];       // *(p+i) = new int[col];

        for (int j = 0; j < col; j++)
        {
            p[i][j]=5;
        }
    }

    for(int i=0; i<raw; i++){

        delete [] p[i];
    }

    delete []p;


}