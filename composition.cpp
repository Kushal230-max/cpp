//compostion or containership program:
#include<iostream>
using namespace std;
class Apple {
    public:
    void eat(){
        cout<<"eat apple"<<endl;
    }
};
class Ball{
    Apple a;
    public:
    void play(){
        a.eat();
        cout<<"play ball"<<endl;
    }
};
int main()
{
    Ball b;
    b.play();
    return 0;
}