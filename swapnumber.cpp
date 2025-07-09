//wap to swap two number using reference variable and function
#include<iostream>
using namespace std;
void fun(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=5,b=3;
fun(a,b);
cout<<a<<endl;
cout<<b<<endl;
return 0;
}