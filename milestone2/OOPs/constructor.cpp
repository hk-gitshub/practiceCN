#include <iostream>
using namespace std;

class Student{
    public :
    char *name;
    int rollNo;
    Student(){}

    Student(int rollNo){
        (*this).rollNo = rollNo;       // or this->rollNo = rollNo;
    }

    void print(){
        cout << name << " "<< rollNo << endl;
    }
};

int main() {
    Student s1;
    s1.name="Hardik";
    s1.rollNo = 101;
    Student s(102);
    s.name="HK";
    s.print();
    s1.print();
}