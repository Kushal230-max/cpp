//2080 question no 2
#include<iostream>
using namespace std;
class Staff 
{
    int code;
    string name;
    public:
    void getdata()
    {
        cout<<"enter code and name:"<<endl;
        cin>>code>>name;
    }
    void display()
    {
        cout<<"code:"<<code<<endl<<"name:"<<name<<endl;
    }
};
class Teacher :public Staff
{
    int salary;
    string subject;
    public:
    void getdata()
    {
        cout<<"enter subject and salary:"<<endl;
        cin>>subject>>salary;
    }
    void display()
    {
        Staff::display();
        cout<<"subject:"<<subject<<endl<<"salary:"<<salary<<endl;
    }
};
class Typist:public Staff
{
    int speed;
    public:
    void getdata()
    {
        cout<<"enter speed in wpm:"<<endl;
        cin>>speed;
    }
    void display()
    {
        Staff::display();
        cout<<"speed:"<<speed<<endl;
    }
};
int main()
{
    Teacher t;
    t.Staff::getdata();
    t.getdata();
    t.display();
    Typist s;
    s.Staff::getdata();
    s.getdata();
    s.display();
    return 0;
}