#include<iostream>
using namespace std;

template<class T>
void show(T a,T b)
{
    cout<<a<<endl<<b<<endl;
}

int main()
{
    int p=10,q=20;
    char s='r',r='k';
    float d=2.12,f=2.33;
    show(p,q);
    show(s,r);
    show(d,f);
    return 0;
}