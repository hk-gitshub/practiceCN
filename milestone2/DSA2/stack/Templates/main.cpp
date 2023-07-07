#include<bits/stdc++.h>
using namespace std;
#include"templates.cpp"

int main(){
    Pair<int, double> p1;
    p1.setX(10);
    p1.setY(10.738);
    cout<<p1.getX()<<" "<<p1.getY()<<endl;

    Pair< Pair<int, double>, char> p2;
    p2.setY('c');

    Pair <int, double> p3;
    p3.setX(11);
    p3.setY(9456.332);

    p2.setX(p3);
    cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<" "<<p2.getY()<<endl;
}