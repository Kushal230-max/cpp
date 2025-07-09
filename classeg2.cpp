//waap to create a class teacher with data members, tid and subject and member funtion for reading and displaying data member. Both
//the member function should be defined outside the class. crate two objects of the class teacher and use them to display the info
#include<iostream>
using namespace std;
class Teacher
{
    int tid;
    string sub;
    public:
    void data();
    void display();
};
void Teacher :: data()
{
 cout<<"enter a tid and subject";
 cin>>tid>>sub;
}
void Teacher :: display()
{
   cout<<"displaying:"<<endl;
   cout<<"tid:"<<tid<<endl;
   cout<<"subject:"<<sub<<endl;
}
int main()
{
    Teacher t1,t2;
    t1.data();
    t1.display();
    t2.data();
    t2.display();
    return 0;
}



