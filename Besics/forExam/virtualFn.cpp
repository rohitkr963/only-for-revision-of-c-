#include<iostream>
using namespace std;

class A
{
    public:
    virtual void  show()=0;
    void dis()
    {
        cout<<"Rohit"<<endl;
    }
};
class B:public A
{
    public:
    void dis()
    {
        cout<<"kajal";
    }
};

int main()
{
   A*ptr;
   B obj;
   ptr=&obj;
   ptr->dis();


    return 0;
}
