#include<iostream>
using namespace std;

 
// Following is the main function we are using internally.
// Refer this for completing the ComplexNumbers class.
 
 class ComplexNumbers {
    private:
    int real, imaginary;      

    public:
    ComplexNumbers(int real, int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }

    void plus(ComplexNumbers const &c2){        // To make const reference to direct connect with object and read access
        this->real=real+c2.real;
        this->imaginary=imaginary+c2.imaginary;
    }

    void multiply(ComplexNumbers const &c2){
        int xx = real*(c2.real);
        int xy = real*(c2.imaginary)+imaginary*(c2.real);
        int yy=imaginary*c2.imaginary*(-1);

        this->real=xx+yy;
        this->imaginary=xy;
    }

    void print(){
        cout<<this->real<<" + i"<<this->imaginary;
    }
};
 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
 
 


