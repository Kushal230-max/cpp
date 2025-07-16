// operation operator > overloadng using operator overloading
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
    friend void operator>(Apple &a,Apple &b);
};
//operator overloading function
void operator>(Apple &a, Apple &b){
    if(a.num>b.num){
        cout<<a.num<<"is greatest"<<endl;
    }
    else{
        cout<<b.num<<"is greatest"<<endl;
    }
}
int main()
{
    Apple a,b;
    a.get();
    b.get();
    a>b;// operator>(a,b )
    return 0;
}