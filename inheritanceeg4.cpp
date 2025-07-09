//hybrid case
#include<iostream>
using namespace std;
//Ambiguity problem in hybrid(multi-path) inheritance
//soln:make class A as a virtual base class
class A
{
    public:
    void fun(){
        cout<<"A A A"<<endl;
    }
};
class B:public virtual A{//class B:public A->make a ambiguity problem
    
};
class C:public virtual A{

};
class D:public B,public C{

};
int main()
{
    D d;
    d.fun();
    return 0;
}