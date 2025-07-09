//defining member fun outside the class
#include<iostream>
using namespace std;
class Nepal
{
    public:
    void fun();
};
void Nepal::fun()
{
    cout<<"hehe";
}
int main()
{
    Nepal n;
    n.fun();
    return 0;
}