#include<bits/stdc++.h>
using namespace std;

class bus{
    public:
    void print();
};
void test();
class truck{
    private:
        int x;
    protected:
        int y;
    public:
        int z;

friend void bus :: print();
friend void test();
//if there is lots of function we have to make friend so make 
//friend class

friend class bus;
    
};

void bus :: print(){
    truck t;
    t.x=5;
    t.y=10;
    cout<<t.x<<" "<<t.y<<endl;
}

void test(){
    truck t;
    t.x=5;
    t.y=10;
    cout<<t.x<<" "<<t.y<<endl;
}

int main(){
    bus b;
    b.print();
    test();
}