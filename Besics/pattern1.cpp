#include<iostream>
using namespace std;


int main()
{
    int j,n;
    cout<<"enter a number";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for( j=1; j<=i; j++)
        {
            if(i%2!=0)
            {
            cout<<j;
            }
        
        else 
        {
            cout<<char(j+64);
        }
        
        }
        cout<<endl;
    }
}