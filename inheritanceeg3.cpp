#include<iostream>
using namespace std;
class Person
{
    string name;
    public:
    void data1()
    {
        cout<<"enter name"<<endl;
        cin>>name;
    }
    void display()
    {
         cout<<"name:"<<name<<endl;
    }
};
class Student :public Person
{
    int roll;
    public:
    void data2()
    {
    cout<<"enter roll no:"<<endl;
    cin>>roll;
    }
    void display()
    {
        Person::display();
        cout<<"roll no:"<<roll<<endl;
    }
};
class Teacher : public Person{
    string sub;
    public:
    void data3(){
        cout<<"enter subject:"<<endl;
        cin>>sub;
    }
    void display()
    {
        Person::display();
        cout<<"subject:"<<sub<<endl;
    }
};
int main()
{
    Student s;
    s.data1();
    s.data2();
    Teacher t;
    t.data1();
    t.data3();
    s.display();
    t.display();
    return 0;
}