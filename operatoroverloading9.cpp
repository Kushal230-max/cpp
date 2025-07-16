// operator overloaing(unary ++)
#include<iostream>
using namespace std;
class Apple{
    int num;
    public:
    void get(){
        cout<<"enter number:"<<endl;
        cin>>num;
    }
    void display()
    {
        cout<<"Number:"<<num<<endl;
    }
    friend void operator++(Apple &a);//for post-> friend void operator++(Apple &a,int)
};
// operator overloading function
void operator++(Apple &a){
    ++a.num;
}
int main()
{
    Apple a;
    a.get();
    a.display();
    ++a; //operator++(a)
    a.display();
    return 0;
}
