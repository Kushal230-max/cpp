//static data member
#include<iostream>
using namespace std;
class Student 
{
    string name;//general data member
    int roll;//general data member
    static int semester;//static data member
    public:
    void get(int r)
    {
        semester=r;
    }
    void display()
    {
        cout<<"sem:"<<semester<<endl;
    }
};
int Student::semester;
int main()  
{
    Student a,b;
    a.get(5);
    b.display();///static dta member is common to all objects 
                //so it prints 5
    return 0;
}