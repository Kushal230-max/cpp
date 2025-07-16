// binay operator (+) overloadng using operator overloading
#include<iostream>
using namespace std;
class Apple{
    int num;
    public:
    void get()
    {
        cout<<"enter number:"<<endl;
        cin>>num;
    }
    void display()
    {
        cout<<"number:"<<num;
    }
    friend void operator+(Apple &a,Apple &b);
};
//operator overloading function
void operator+(Apple &a, Apple &b){
    a.num=a.num+b.num;
}
int main()
{
    Apple a,b;
    a.get();
    b.get();
    a+b;// operator+(a,b )
    a.display();
    return 0;
}