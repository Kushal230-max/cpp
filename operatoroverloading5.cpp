//binary 
//comparison == operator overloading
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
    int operator==(Apple b){
        if(num==b.num){
            return 1;
        }
        else{
            return 0;
        }
    } 
};
int main (){
    Apple a,b;
    a.get();
    b.get();
    if(a==b){ //a.operator==(b)
        cout<<"They are equal."<<endl;
    }
    else{
        cout<<"They are not equal."<<endl;
    }
    return 0;
}
