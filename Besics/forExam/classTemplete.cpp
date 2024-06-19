#include<iostream>
using namespace std;

template<class T>
class show
{
    T a,b;
    public:
     show(int p,int q)
    {
        a=p;
        b=q;
    }
    void dis()
    {
        cout<<a<<endl<<b<<endl;
    }
};

int main()
{
    show <int> obj(5,10);
    obj.show();
    return 0;

}