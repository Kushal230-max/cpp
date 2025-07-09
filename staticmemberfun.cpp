#include<iostream>
using namespace std;
class Student
{
    string name;
    int roll;
    static int semester;
    public:
    static void get(int a)
    {
        semester=a;
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
    Student::get(2);
    b.display();
    a.get(5);
    b.display(); 
    return 0;
}