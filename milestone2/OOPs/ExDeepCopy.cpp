#include <iostream>
using namespace std;
#include <cstring>

class Student{
    public :
    char *name;
    int rollNo;

    // Constructor 1
    Student(int num){
        rollNo = num;
        // Deep copy
        name = new char[10];
        strcpy(name, "abc");
    }

    // Constructor 2
    Student(int num, char *str){
        rollNo = num;
        //Deep copy
        name = new char[strlen(str) + 1];
        strcpy(name, str);
    }

    void print(){
        cout << name << " "  <<  rollNo << " ";
    }
};

int main() {
    Student s1(101);
    s1.print();
    char str[] ="xyz";
    Student *s2 = new Student(150, str);
    s2 -> print();
}