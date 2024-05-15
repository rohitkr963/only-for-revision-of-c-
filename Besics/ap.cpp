#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;

    int a=1,d=2;
    for(int i=1; i<=n; i++)
    {
        int c = a+(i-1)*d;
        cout<<c<<endl;
    }
    return 0;
}