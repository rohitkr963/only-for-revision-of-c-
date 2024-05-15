#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,x,power,GP;
    int a=3,r=4;
    cout<<"enter a number";
    cin>>n;

    x=(n-1);

    power= pow(x,r);

    GP=power*a;
    for(int i=a; i<=GP; i=i*r)
    {
       cout<<i<<endl;
    }
    return 0;
}