//using constructor to initialize the data members.Define member function named show Data() in each class to display the info create
//two object of hero class and display the info
#include<iostream>
using namespace std;
class Batman{
    int power;
    public:
    Batman()
    {
        cout<<"enter the power"<<endl;
        cin>>power;
    }
    void display()
    {
        cout<<"power"<<power<<endl;
    }
};
class Superman{
    int strength;
    public:
    Superman()
    {
        cout<<"enter the strength"<<endl;
        cin>>strength;
    }
    void display()
    {
        cout<<"strength"<<strength<<endl;
    }
};
class Hero:public Batman,public Superman{
    int life;
    public:
    Hero()
    {
        cout<<"enter the life"<<endl;
        cin>>life;
    }
    void display()
    {
        cout<<"life"<<life<<endl;
    }
};
int main()
{
    Hero h1,h2;
    h1.Batman::display();
    h1.Superman::display();
    h1.display();
    h2.Batman::display();
    h2.Superman::display();
    h2.display();
    return 0;
}