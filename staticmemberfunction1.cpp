// 2076 ko question no1 
#include<iostream>
using namespace std;
class Account{
    int acc;
    int balance;
    static int min_balance;
    public:
    void getdata(){
        cout<<"enter account number:"<<endl;
        cin>>acc;
        cout<<"enter balance of account:"<<endl;
        cin>>balance;
    }
    void display(){
        cout<<"account no:"<<acc<<endl;
        cout<<"balance:"<<balance<<endl;
    }
    static void min_display(){
        cout<<"Minimum-balance"<<min_balance<<endl;
    }
};
int Account::min_balance=2000;
int main(){
Account a[2];
a[0].getdata();
a[0].display();
a[0].min_display();
return 0;
}