#include<iostream>
using namespace std;
class Apple{
    int m;
    public:
    void get1()
    {
        cout<<"enter the value of m:";
        cin>>m;
    }
    void display()
    {
        cout<<"value of m="<<m<<endl;
    }
};
class Ball:public virtual Apple
{
    int x;
    public:
     void get2()
    {
        cout<<"enter the value of x:";
        cin>>x;
    }
    void display()
    {
        cout<<"value of x="<<x<<endl;
    }
};
class Cat:public virtual Apple{

    int y;
    public:
     void get3()
    {
        cout<<"enter the value of y:";
        cin>>y;
    }
    void display()
    {
        cout<<"value of y="<<y<<endl;
    }
};
class Dog:public Ball,public Cat{

    int z;
    public:
     void get4()
    {
        cout<<"enter the value of z:";
        cin>>z;
    }
    void display()
    {
        Apple::display();
        Ball::display();
        Cat::display();
        cout<<"value of z="<<z<<endl;
    }
};
int main()
{
    Dog d;
    d.get1();
    d.get2();
    d.get3();
    d.get4();
    d.display();
    return 0;
}