#include<iostream>
using namespace std;
class Apple{
    int a;
    public:
    void display(int a){
        cout<<a<<endl;
    }
};
int main()
{
    Apple a[10];
    int i;
    for (i=0;i<10;i++)
    {
        a[i].display(i);
    }
    return 0;
}