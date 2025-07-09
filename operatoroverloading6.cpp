//binary 
//comparison += operator overloading
#include<iostream>
using namespace std;
class Apple{
    int num;
    public:
    void get(){
        cout<<"enter any number:"<<endl;
        cin>>num;
    }
    void display(){
        cout<<"number:"<<num;
    }
    void operator+=(Apple b){
        num+=b.num;
    } 
};
int main (){
    Apple a,b;
    a.get();
    b.get();
    a+=b; //similar to a.operator+=(b)
    a.display();
    return 0;
}