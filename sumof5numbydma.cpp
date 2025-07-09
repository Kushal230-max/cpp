//wap to add 5 num using dma
#include<iostream>
using namespace std;
int main()
{
    int*a;
    a=new int[5];//20 bytes memory is allocated using dma
    int i,sum=0;
    cout<<"enter any 5 numbers";
    for(i=0;i<5;i++)
    {
        cin>>a[i];//a[i]=*(a+i)
        sum=a[i]+sum;
    }
    cout<<"sum"<<sum<<endl;
    delete [ ]a;
}