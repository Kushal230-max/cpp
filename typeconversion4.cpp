// write a program to convert feet to inches using user-defined data type to basic type conversion
// class type to basic  type
// source:feet(class-type)
// destination:inches(basic-type)
// convert feet to inches

// note-if class is source->use operator function method

#include<iostream>
using namespace std;
class Height{
    float feet;
    public:
    Height()
    {
    cout<<"enter height in feet:"<<endl;
    cin>>feet;
    }
    //operator function
    operator float(){
        return feet*12;
    }
};
int main()
{
    float inches;
    Height g;
    inches=g;
    cout<<"Height in inches:"<<inches;
    return 0;
}
