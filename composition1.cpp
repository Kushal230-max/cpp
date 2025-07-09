#include<iostream>
using namespace std;
class Room{
    int sem;
    public:
    void get(){
        cout<<"enter sem:"<<endl;
        cin>>sem;
    }
    void disp(){
        cout<<sem;
    }
};
class College{
    string name;
    Room r;
    public:
    void getData(){
        cout<<"enter name:"<<endl;
        cin>>name;
        r.get();
    }
    void display()
    {
        cout<<name<<endl;
        r.disp();
    }
};
int main()
{
    College c;
    c.getData();
    c.display();
    return 0;
}