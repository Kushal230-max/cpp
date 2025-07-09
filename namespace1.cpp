// by using scope resolution
#include<iostream>
using namespace std;
namespace aero
{
    void fly(){
        cout<<"I want to fly aeroplane"<<endl;
    }
} 
namespace kite
{
    void fly(){
        cout<<"I want to fly kite"<<endl;
    }
} 
int main()
{
    aero::fly();
    kite::fly();
    return 0;
}
