// wap to add time in hours and minutes of two different object using operator overloading
#include<iostream>
using namespace std;
class Time{
    int hours;
    int minutes;
    public:
    void get(){
        cout<<"enter hours and minutes:"<<endl;
        cin>>hours>>minutes;
    }
    Time operator+(Time b){
        Time temp;
        temp.hours=hours+b.hours;
        temp.minutes=minutes+b.minutes;
        if(temp.minutes>=60){
            temp.hours++;
            temp.minutes=temp.minutes-60;
        }
        return temp;
    }
    void display(){
        cout<<"after addition:"<<endl;
        cout<<hours<<":"<<minutes;
    }
};
int main(){
    Time a,b,c;
    a.get();
    b.get();
    c=a+b;
    c.display();
    return 0;
}