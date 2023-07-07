#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    int roll;
    int age;
    char *name;

student(){}

student(int age, char *name){
    this->age = age;
    //Deep copy
    this->name = new char[strlen(name)+1];  
    strcpy(this->name, name);
}

//own copy constructor
//in-built copy constructor will not work whenever we make our own copy constructor 
student(student const &s){     
    this->age = s.age;
    //this->name = s.name;  //shallow copy
    //Deep copy
    this->name = new char[strlen(s.name)+1];
    strcpy(this->name, s.name);
}

void print(){
    cout<<age<<" "<<this->name<<endl;
}
};

