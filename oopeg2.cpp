#include<iostream>
using namespace std;
class Apple
{
    public:
    void fun()
    {
        cout<<"learn"<<endl;
    };
}; 
void play()
{
    cout<<"C"<<endl;
}
int main()
{
Apple a; //a is object
a.fun();
play();
return 0;
}