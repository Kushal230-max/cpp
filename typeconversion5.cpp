//convert feet and inches into meter and cm
//using class type into basic type
#include<iostream>
using namespace std;
class Length{
    float feet;
    float inches;
    public:
    void get()
    {
        cout<<"enter lenght in feet and inches:"<<endl;
        cin>>feet>>inches;
    }
    operator float(){
        float f=feet+inches/12;
        return f/3.3;
    }
};
int main()
{
    float m;
    float cm;
    Length l;
    l.get();
    m=l;
    cm=(m-int(m))*100;
    cout<<"in meter:"<<int(m)<<endl;
    cout<<"in cm:"<<cm;
    return 0;
}