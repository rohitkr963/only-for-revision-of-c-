#include<iostream>
using namespace std;

class A
{
    int a,b;
    public:
    A(int x, int y)
    {
      a=x;
      b=y;
    }
    void show()
    {
        cout<<a<<endl<<b<<endl;
    }
};

int main()
{
  A obj(5,10);
  obj.show();
  return 0;
}