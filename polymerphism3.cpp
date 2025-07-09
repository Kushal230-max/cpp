#include<iostream>
using namespace std;
class Nepal{
    public:
    virtual void say()
    {
        cout<<"Nepal";
    }
};
class Bharatpur:public Nepal{
    public:
    void say()
    {
        cout<<"Bharatpur";
    }
};
class Gaindakot:public Nepal{
    public:
    void say()
    {
        cout<<"Gaindakot";
    }
};
void fun(Nepal *p)
{
    p->say();
}
int main()
{
    Bharatpur b;
    Gaindakot g;
    fun(&b);
    fun(&g);
    return 0;
}