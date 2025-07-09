#include<iostream>
using namespace std;
class Apple
{
    public:
    void fun()
    {
        cout<<"class Apple"<<endl;
    }
};
class Ball
{
    public:
    void fun()
    {
        cout<<"class Ball"<<endl;
    }
};
class Cat :public Apple,public Ball{
    
};
int main()
{
    Cat c;
    //c.fun(); //it leads to ambiguity error
    //soln to ambiguity problem
    c.Apple::fun();//it will call the fun() of class Apple
    c.Ball::fun();//it will call the fun() of the class Ball
    return 0;

}