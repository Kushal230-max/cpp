#include<iostream>
using namespace std;
class Shape{     //Abstract class
    public:
    virtual void fun()=0;
};
class Circle:public Shape{
    public:
    void fun(){
        cout<<"draw circle..."<<endl;
    }
};
class Rectangle:public Shape{
    public:
    void fun(){
        cout<<"draw rectangle..."<<endl;
    }
};
class Square:public Shape{
    public:
    void fun(){
        cout<<"draw square..."<<endl;
    }
};
void display(Shape *p){
    p->fun();
}
int main()
{
    Square s;
    display(&s);
    Rectangle r;
    display(&r);
    Circle c;
    display(&c);
    return 0;
}
  