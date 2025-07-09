// Create a class author with attributes name and qualification. Also create a class publication with pname. From these classes derive a classes derive a class book having attributes title and price. Each of the three classes should have getdata() method to get their data from user. The classes should have putdata() method to display the data. Create instance of the class book in main.
#include<iostream>
using namespace std;
class Author
{
    string name;
    string qualification;
    public:
    void getdata()
    {
        cout<<"enter name and qualification:";
        cin>>name>>qualification;
    }
    void putdata()
    {
        cout<<"name:"<<name<<endl<<"qualification:"<<qualification<<endl;
    }
};
class Publication
{
    string pname;
    public:
    void getdata()
    {
        cout<<"enter pname:";
        cin>>pname;
    }
    void putdata()
    {
        cout<<"pname:"<<pname<<endl;
    }
};
class Book:public Author,public Publication
{
    string title;
    float price;
    public:
    void getdata()
    {
        cout<<"enter title and price:";
        cin>>title>>price;
    }
    void putdata()
    {
        Author::putdata();
        Publication::putdata();
        cout<<"title:"<<title<<endl<<"price"<<price<<endl;
    }
};
int main()
{
    Book b;
    b.Author::getdata();
    b.Publication::getdata();
    b.getdata();
    b.putdata();
}
