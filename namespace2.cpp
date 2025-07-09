// by using directive
#include<iostream>
using namespace std;
namespace aero
{
    int a=8;
    void fly(){
        cout<<"I want to fly aeroplane"<<endl;
    }
} 
namespace kite
{
    int b=45;
    void fly(){
        cout<<"I want to fly kite"<<endl;
    }
} 
using namespace aero;
int main()
{
    fly();
    cout<<a<<endl;
    kite::fly();
    cout<<kite::b<<endl;
    return 0;
}
