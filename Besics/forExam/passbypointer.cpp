#include<iostream>
using namespace std;

void passbypointer(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
  int r=5,k=10;
  int *p1=&r,*p2=&k;
  cout<<"before swap : "<<r<<endl<<k<<endl;
  passbypointer(p1,p2);
  cout<<"after swap : "<<r<<endl<<k<<endl;
  return 0;
}