#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;
    cout<<"enter your digit :)";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        int digit=n%10;
        if(digit%2==0)
        {
            sum=sum+digit;
        }
        n/=10;
    }
    cout<<sum<<endl;
}