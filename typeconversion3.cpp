// class type to basic  type
// source:meter(class-type)
// destination:cm(basic-type)
// convert m to cm

// note-if class is source->use operator function method

#include<iostream>
using namespace std;
class Lenght{
    float meter;
    public:
    Lenght()
    {
    cout<<"enter lenght in meter:"<<endl;
    cin>>meter;
    }
    //operator function
    operator float(){
        return meter*100;
    }
};
int main()
{
    float cm;
    Lenght l;
    cm=l;
    cout<<"lenght in cm:"<<cm;
    return 0;
}
