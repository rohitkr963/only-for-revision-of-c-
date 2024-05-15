#include<iostream>
using namespace std;

int main()
{
    int i,j,k;

    for(i=1; i<=4; i++)
    {
        for(j=i; j<=4; j++)
        {
            cout<<" ";
        }
        for(k=1; k<=i; k++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    
     for(i=1; i<=5; i++)
    {
        for(j=1; j<i; j++)
        {
            cout<<" ";
        }
        for(k=i; k<=5; k++)
        {
            cout<<" *";
        }
        cout<<endl;
    }

    return 0;
}