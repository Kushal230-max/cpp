#include<iostream>
using namespace std;
 int a=5;
int* fun()
{
    return &a;
}
int main()
{
    int *a;
    a=fun();
    cout<<*a<<endl;
    cout<<a;
    return 0;
}