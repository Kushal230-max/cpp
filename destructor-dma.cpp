#include<iostream>
using namespace std;
//using of destructor to release memory
class CCT
{
    int *p;
    public:
    CCT()
    {
        p=new int;
        cout<<"memory allocated dynamically"<<endl;
    }
    ~CCT()
    {
        delete p;
        cout<<"Memory is released"<<endl;
    }
};
int main()
{
    CCT c;
    return 0;
}