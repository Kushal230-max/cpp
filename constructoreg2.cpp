//parametrized constructor
#include<iostream>
using namespace std;
class Ninja 
{
    int power;
    public:
    Ninja()//default constructor  
    {
        power=2;
    }
    Ninja(int p)  //parametrized constructor
{
        power=p;
    }
    Ninja(Ninja &hattori)//copy constructor
    {
        cout<<"Ding Ding Ding"<<endl;
        power=hattori.power;
    }
    void display()
    {
        cout<<"power:"<<power<<endl;
    }
};
int main()
{
    Ninja a;
    Ninja b(10);
    Ninja c(a);//it call default copy constructor
    a.display();
    b.display();
    c.display();
    return 0;
}