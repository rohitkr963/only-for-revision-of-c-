#include<iostream>
using namespace std;

class A
{
    public:
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
    B obj;
    obj.dis();

    return 0;
}
