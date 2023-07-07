#include <iostream>
using namespace std;
#include "student.cpp"

int main(){
    student s1;         //creat object statically
    student s2;

    s1.age=17;
    s1.name="hardik";
    s1.roll=101;

    s2.age=22;
    s2.name="komal";
    s2.roll=102;
    
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.roll<<endl;
    cout<<s2.name<<endl;
    cout<<s2.age<<endl;
    cout<<s2.roll<<endl;

    student *s3=new student;    //create objects dynamically 
    (*s3).age=10;
    (*s3).name="hk";
    (*s3).roll=103;             // it will de-refere the object and assign value to properties
    cout<<s3->name<<endl;
    cout<<s3->age<<endl;
    cout<<s3->roll<<endl;

    s3->age=10;                 // both are same (*s3). and -> 
    s3->name="HK";              // using arrow(->) automatically put * (de-refere) and dot properties 
    s3->roll=103;
    cout<<s3->name<<endl;
    cout<<s3->age<<endl;
    cout<<s3->roll<<endl;


}