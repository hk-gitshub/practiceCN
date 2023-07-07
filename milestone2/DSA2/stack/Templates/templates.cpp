#include<bits/stdc++.h>
using namespace std;

// template <typename T> 
template <typename T, typename w>
class Pair{
    T x;
    w y;

    public:

    void setX(T x){
        this->x = x; 
    }

    void setY(w y){
        this->y=y;
    }

    T getX(){
        return (this->x);
    }

    w getY(){
        return(this->y);
    }
};