#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int age;
    int const rollNum;
    int &x;     //reference variable of age;

    student(int rollNum, int age): rollNum(rollNum), age(age), x(this->age){
    }

    void print(){
        cout<<x<<" "<<rollNum<<endl;
    }
};

int main(){
    student s1(101, 20);
    s1.age = 20;
    // s1.rollNum = 101;

    s1.print();
}