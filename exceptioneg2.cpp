// exzeption problem
// #include<iostream>
// using namespace std;
// int main()
// {
// int a,b;
// cout<<"enter two numbers"<<endl;
// cin>>a>>b;
// cout<<a/b<<endl;
// cout<<"get set go"<<endl;
// return 0;
// }

// exception handeling program

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;

    try{
        if(b==0){
            throw b;
        }
        else{
            cout<<a/b<<endl;
        }
    }
    catch(int e){
        cout<<"divide by zero exception detected"<<endl;
    }
    return 0;
}