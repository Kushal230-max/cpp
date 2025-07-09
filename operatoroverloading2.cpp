//unary operator
#include<iostream>
using namespace std;
//overloading decreament
class Apple
{
    int num;
    public:
    void get(){
        cout<<"Enter a number:";
        cin>>num;
    }
    void display(){
        cout<<num<<endl;
    }
    void operator--(int){ //post use int as parameter
        num--; 
    }
};
int main(){
    Apple a;
    a.get();
    a.display();
    a--;  //a.operator--();
    a.display();
    return 0;
}