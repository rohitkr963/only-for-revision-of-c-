#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter the size of a and b";
    cin>>a>>b;

    try
    {
        if(b!=0)
        {
            c=a/b;
            cout<<c<<endl;
        }
        throw(b);
    }
    catch(int b)
    {
        cout<<"it is not possible ";
    }
    return 0;
}