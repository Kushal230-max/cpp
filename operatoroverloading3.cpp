//binary   
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
    void display(){
        cout<<"number:"<<num;
    }
    void operator+(Apple b){
        num=num+b.num;
    }
};
int main()
{
    Apple a,b;
    a.get();
    b.get();
    a.display();
    b.display();
    a+b;//a.operator+(b)
    a.display();
    return 0;
}