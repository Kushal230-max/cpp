//class haviing pure virtual function = abstract class

#include<iostream>
using namespace std;
class Apple{  //abstract class
    public:
    virtual void fun()=0;  //pure virtual function
    void gun(){
        cout<<"Attack"<<endl;
    }
};
class Ball: public Apple{//concrete class->having no pure virtual function
    public:
    void fun(){
        cout<<"play balls";
    }
};
int main()
{
    Apple *p;//object of apple cant be created
    Ball b;
    p=&b;
    p-> fun();
    return 0;
}