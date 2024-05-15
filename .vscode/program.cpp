#include<iostream>
using namespace std;
int main()
{
    int i,multi,n,total;
    multi=1;
   cout<<"enter the value of n";
   cin>>n;
  for(i=1;i<=n;i++){
    multi=multi*i;
    total=multi;
   //cout<<"print the value of n = "<<i<<endl;
    cout<<"print the n number of fectorial = "<<total<<endl;
  }
  return 0;
}