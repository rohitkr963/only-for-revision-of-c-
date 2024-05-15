#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;

    for(int i=100; i>=n; i=i-3)
    {
        cout<<i<<",";
    }
}