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
        cout<<"distructor object"<<endl;
        cout<<n<<endl;
    }

};
int main()
{
    A obl;
    return 0;
}