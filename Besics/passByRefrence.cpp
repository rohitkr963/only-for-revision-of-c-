#include<iostream>
using namespace std;

void refrence(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int r=10,k=30;
    cout<<"before swap"<<r<<k<<endl;
    refrence(r,k);
    cout<<"after swap"<<r<<k<<endl;
}