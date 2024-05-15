#include<iostream>
using namespace std;
int main(){
    int number;
    int a=0,b=1;
    cout<<"enter the value of n = ";
    cin>>number;

    cout<<a<<" ";
    for(int i=a; i<=number; i++)
    {
    int c=a+b;
    cout<<c<<" ";
    // a=b;
    // b=c;
    // c=a;
    b=a;
    a=c;
    c=b;

    }
   
    }
