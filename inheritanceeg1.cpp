#include<iostream>
using namespace std;
//parent class
class Parent 
{
    public:
    void fun()
    {
        cout<<"Iam parent class"<<endl;
    }
};
//child class
class Child : public Parent{
    public:
    void fun()
    {
        cout<<"I am child class"<<endl;
    }
};
int main()
{
    Child c;//function overriding
    c.fun();//it will call execute the fun() of child class due to function overriding
    c.Parent::fun();
    return 0;
}
/*difference betweeen function overloading and overriding

*/