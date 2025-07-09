#include<iostream>
using namespace std;
class DC{
    int *ptr;
    public:
    DC(){ //dynamic constructor
        ptr=new int;
        cout<<"memory allocated dynamically"<<endl;
    }
    ~DC()
    {
        delete ptr;
        cout<<"memory released"<<endl;
    }
};
int main()
{
    DC obj;
    return 0;
}
