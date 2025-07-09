//write a program in c++ to add two number using Dynamic memory allocation
#include<iostream>
using namespace std;
//syntax
int main()
{
    int *p1,*p2;
    p1=new int; //4 bytes memory is allocated dynamically
    p2=new int;
    *p1=2;
    *p2=5;
   cout<<"sum"<<(*p1+*p2)<<endl;
    delete p1;
    delete p2;

    return 0;

}