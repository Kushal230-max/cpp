//type conversion
//basic- type to user defined datatype(eg-class type)
// convert gram to kg

// note-if class is destination->use constructor method

#include<iostream>
using namespace std;
class Weight{
    float kg;
    public:
    Weight()
    {
        
    }
    Weight (float gram){
        kg=gram/1000;
    }
    void display()
    {
        cout<<"Weight in kg:"<<kg<<endl;
    }
};
int main()
{
    float gram=1500;
    Weight g;
    g=gram;
    g.display();
    return 0;
}