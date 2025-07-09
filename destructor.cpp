#include<iostream>
using namespace std;
class Ninja
{
    public:
    Ninja()
    {
        cout<<"I am constructor"<<endl;
    }
    ~Ninja()
    {
        cout<<"I am destructor"<<endl;
    }
};
void fun()
{
    cout<<"Hello..boys"<<endl;
    Ninja b;
    cout<<"today is friday.."<<endl;
}
int main()
{
    cout<<"Good Morning"<<endl;
    Ninja a;
    cout<<"hello..sushil"<<endl;
    fun();
    cout<<"lets go party"<<endl;
    return 0;
}