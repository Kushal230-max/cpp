#include<iostream>
using namespace std;
class Warcraft
{
    public:
    Warcraft(){
        cout<<"I am Constructor. I want peace."<<endl;
    }
    ~Warcraft(){
        cout<<"I am destructor. i want fight"<<endl;
    }
};
class Dota:public Warcraft
{
    public:
    Dota(){
        cout<<"Yes, Consturctor"<<endl;
    }
    ~Dota(){
        cout<<"Destructor."<<endl;
    }
};
int main()
{
    Dota d;
} 