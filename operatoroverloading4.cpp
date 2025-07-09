//binary 
//comparison < operator overloading
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
    void operator<(Apple b){
        if(num<b.num){
            cout<<"smallest:"<<num;
        }
        else{
            cout<<"smallest:"<<b.num;
        }
    } 
};
int main (){
    Apple a,b;
    a.get();
    b.get();
    a<b; //similar to a.operator<(b)
    return 0;
}
