//type conversion
//basic- type to user defined datatype(eg-class type)
// convert m to cm
#include<iostream>
using namespace std;
class Length{
    int cm;
    public:
    Length()
    {
        
    }
    Length (int m){
        cm=100*m;
    }
    void display()
    {
        cout<<"Lenght:"<<cm<<endl;
    }
};
int main()
{
    int m=4;
    Length l;
    l=m;
    l.display();
    return 0;
}