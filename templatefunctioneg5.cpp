#include<iostream>
using namespace std;
//template class
template<class A,class B>
class Warcraft{
    A a;
    B b;
    public:
    void get(A x ,B y)
    {
    a=x;
    b=y;
    cout<<a<<endl<<b<<endl;
    }
};
int main()
{
    Warcraft <int,int> w1;
    w1.get(2,5);
    Warcraft <float,string>w2;
    w2.get(3.4,"abd");
    Warcraft<int,float>w3;
    w3.get(2,3.4);
    return 0;
}