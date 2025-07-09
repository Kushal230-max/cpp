// write a program to add two private numbers of two different classes using friend functions
#include<iostream>
using namespace std;
class A{
    int num1;
    public:
    friend void add();
};
class B{
    int num2;
    public:
    friend void add();
};
void add(){
    A a;
    a.num1=23;
    B b;
    b.num2=45;
    int sum=a.num1+b.num2;
    cout<<"sum="<<sum<<endl;
}
int main()
{
    add();
    return 0;
}