#include<iostream>
using namespace std;
#include "student.cpp"

int main(){
    char name[]="hardik";
    student s1(20, name);
    s1.print();

    student s2(s1);
    s2.name[0]='k';
    s1.print();
    s2.print();

    
}