#include<iostream>
using namespace std;
class A{
    int num;
    public:
    void get(){
        cout<<"enter a number:"<<endl;
        cin>>num;
    }
    void display(){
        cout<<"Num:"<<num<<endl;
    }
    //operator overloading function
    A operator -(){
        A temp;
        temp.num=-num;
        return temp;
    }
};
int main(){
    A a,b;
    a.get();
    a.display();
    b = -a;  //a.operator-();
    b.display();
    return 0;
}