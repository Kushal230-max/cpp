#include<iostream>
using namespace std;
class Person
{
string name;
int id;
public:
void getData()
{
    cout<<"Enter name and id";
    cin>>name>>id;
}
void display()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Id:"<<id<<endl;
}
};
int main()
{
    Person p1,p2;
    p1.getData();
    p1.display();
    return 0;

}