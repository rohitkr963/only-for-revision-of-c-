#include<iostream>
using namespace std;

class outer
{
    public:
    class inner
    {
        public:
        void dis()
        {
            cout<<"inner class "<<endl;
        }
    };
};

int main()
{
    outer::inner obj;
    obj.dis();

    return 0;
}