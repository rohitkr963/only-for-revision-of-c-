#include<iostream>
using namespace std;

inline void multiply(int a, int b)
{
    return a*b;
}

int main()
{
    int r=5, k=10;
    cout<<"product = : "<<multiply(r,k);
    return 0;
}