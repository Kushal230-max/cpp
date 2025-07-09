#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int &b=a;//b is a reference variable
    cout<<a<<endl;
    cout<<b<<endl;
    a=10;
    cout<<a<<endl;
    cout<<b<<endl;
    b=2;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}