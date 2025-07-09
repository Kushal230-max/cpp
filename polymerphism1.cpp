//polymerphism
//without using virtual function
//compile time polymerphism//static polymerphism
#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound(){
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;

    a->sound();//early binding//early decision
    return 0;
}
