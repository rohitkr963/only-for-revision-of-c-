#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

int main()
{
    int x,y;
    cout<<"enter a number";
    cin>>x>>y;
     int result =add(x,y);
    cout<<result;
}