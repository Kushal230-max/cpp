#include<iostream>
using namespace std;
class Apple{
    public:
    Apple(){
        cout<<"Constructor of apple"<<endl;
    }
    // virtual destructor
    virtual ~Apple(){
        cout<<"Destructor of apple"<<endl;
    }
};
class Ball:public Apple{
    public:
    Ball(){
        cout<<"Constructor of ball"<<endl;
    }
    ~Ball(){
        cout<<"Destructor of ball"<<endl;
    }
};
int main(){
    Apple *p;
    p=new Ball();
    delete p;
    return 0;
}

// if we remove virtual from parent destructor,memory leakage happens and destructor from Ball wont be called