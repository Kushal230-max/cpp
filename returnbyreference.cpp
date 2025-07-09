 #include<iostream>
 using namespace std;
 int a=5;
 int& fun()
 {
    return a;
 }
 int main()
 {
    cout<<a<<endl;
    fun()=2;
    cout<<a<<endl;
    cout<<fun();
    return 0;
 }