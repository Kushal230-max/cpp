//wap to find the maximum of two int floating points number and character using template function
#include<iostream>
using namespace std;
template<class Kushal> 
void concentrate(Kushal a,Kushal b)
{
    if(a>b){
        cout<<"max:"<<a<<endl;
    }
    else{
        cout<<"max:"<<b<<endl;
    }
}
int main()
{
    concentrate(9,7);
    concentrate('a','b');
    concentrate(4.5,6.7);
    return 0;
}