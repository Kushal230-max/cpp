//write a program to add two integers and two floating point number using template function
#include<iostream>
using namespace std;
template<class Kushal> 
void concentrate(Kushal a,Kushal b)
{
    Kushal sum;
    sum=a+b;
    cout<<"sum"<<sum<<endl;
}
int main()
{
    concentrate(5,7);
    concentrate(4.5,6.7);
    return 0;
}