#include<iostream>
using namespace std;

class A
{
    int n;
    public:
    A()
    {
      n=8;
      cout<<n<<endl;
    }
    ~A()
    {
      cout<<"deleted";
    }
};

int main()
{
  A obj;
  return 0;
}