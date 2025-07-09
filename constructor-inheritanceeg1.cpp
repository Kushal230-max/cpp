#include<iostream>
using namespace std;
class Person
{
    string name;
    string address;
    public:
    void data()
    {
        cout<<"enter name and address"<<endl;
        cin>>name>>address;
    }
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"address:"<<address<<endl;
    }
};
class Student:public Person
{
   int roll;
   float percentage;
   public:
   void data()
   {
    cout<<"enter roll and percent"<<endl;
    cin>>roll>>percentage;
   }
   void display()
   {
    cout<<"rollno:"<<roll<<endl;
    cout<<"percent:"<<percentage<<endl;
    Person::display();
   }
};
class Teacher:public Person
{
    int tid;
    string sub;
    public:
    void data()
    {
        cout<<"enteer tid and subject:"<<endl;
        cin>>tid>>sub;
    }
    void display()
    {
        
        cout<<"tid:"<<tid<<endl;
        cout<<"subject:"<<sub<<endl;
        Person::display();
    }
};
int main()
{
    Student s;
    s.Person::data();
    s.data();
    s.display();
    Teacher t;
    t.Person::data();
    t.data();
    t.display();
    return 0;
}