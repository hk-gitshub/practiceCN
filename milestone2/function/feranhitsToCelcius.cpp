#include<iostream>
using namespace std;


void printTable(int start, int end, int step) {

     int CelsiusV;

     while (start<=end){
         CelsiusV=(5 *(start-32))/9;
         cout<<start<<"\t"<<CelsiusV<<endl;
         start +=step;
     }
    
}

int main(){

    int startF=0, endF=100, gapF=20;
    printTable(startF, endF, gapF);

}
