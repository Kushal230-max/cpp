#include<iostream>
using namespace std;
class student
{
    public:
    student ()
    {
        cout<<"constructor called"<<endl;
    }
};
int main()
{
    student s,t;//it call constructor 
    return 0;
}