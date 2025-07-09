// wap to interchange the value of two integers, two finding point numbers and two characters using template function
#include<iostream>
using namespace std;
template<class Kushal> 
void concentrate(Kushal a,Kushal b)
{
    cout<<"before interchange:"<<endl;
    cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
    Kushal temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after interchange:"<<endl;
    cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
}
int main()
{
    concentrate(9,7);
    concentrate('x','y');
    concentrate(4.5,6.7);
    return 0;
}