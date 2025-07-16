//Overloading unary minus using friend function
#include<iostream>
using namespace  std;
class Apple{
    int num;
    public:
    void get(){
        cout<<"Enter a number:"<<endl;
        cin>>num;
    }
    void display()
    {
        cout<<"Number:"<<num<<endl;
    }
    friend void operator-(Apple &a);
};
void operator-(Apple &a){
    a.num=-a.num;
}
int main()
{
    Apple a,b;
    a.get();
    a.display();
    -a; //operator-(a)
    a.display();
    return 0;
}

