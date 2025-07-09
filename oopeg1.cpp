#include<iostream>
using namespace std;
class Student  //user defined data type
{
    public:
    string name; //data member
    int roll;  //data member
    void study() //member function
    {
        cout<<"learn c";
    };
};
int main()
{
    int a; //memory is allocated for a
    Student b,c;  //memory is allocated for b,c  //b and are object
    b.name="kushal";
    b.roll=23;
    c.name="ghimire";
    c.roll=56;
    cout<<"name:"<<c.name<<endl;
    b.study();
    return 0;
}