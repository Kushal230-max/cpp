#include<iostream>
using namespace std;
template<class A,class B>
void ninja(A x,B y)
{
    cout<<x<<endl<<y<<endl;
}
int main()
{
    ninja(2,2.3);
    ninja('a',34);
    ninja(3,"nepal");  
    return 0;
}