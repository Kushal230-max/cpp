#include<iostream>
using namespace std;
// template function
// handles any type of data
template<class Kushal> 
void concentrate(Kushal a,Kushal b)
{
    cout<<a<<endl<<b<<endl;
}
int main()
{
    concentrate(5,7);
    concentrate('a','b');
    concentrate("kushal","ghimire");
    concentrate(4.5,6.7);
    return 0;
}