//write a  program example that has multiple catch blocks


#include<iostream>
using namespace std;

int main()
{
int a;
cout<<"enter a number other than 1,2,3 "<<endl;
cin>>a;

try{
    if(a==1){
        throw a;
    }
    else if(a==2){
        throw float(a);
    }
    else if(a==3){
        throw char(a);
    }
    else{
        cout<<"Valid number entered"<<endl;
    }
}
catch(int e){
    cout<<"integer exception detected"<<endl;
}
catch(float e){
    cout<<"floating point exception detected"<<endl;
}
catch(char e){
    cout<<"character exception detected"<<endl;
}
return 0;
}